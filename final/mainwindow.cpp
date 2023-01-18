#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QThread>

//ui->listWidget_history->addItem(rcd->toString());

record ** rArray = new record* [50];

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);

    //timer for battery level
    btyTimer = new QTimer(this);
    //timer for session
    sessionTimer = new QTimer(this);
    flashTimer = new QTimer(this);
    shutdownTimer = new QTimer(this);
    softSDTimer = new QTimer(this);

    power = false; //true: on  false:off
    mode = 0; //0:init | 1:select time | 2:select session | 3/4:select Intensity|..
    sCounter = 0;//current selected listwidget item position
    flashSwitch = 4;
    ecc = true;//ear clip connection
    cl = 1;// cl -> connection level
    intensity = 1;
    sTimer = 0;
    recordCounter = 0;//record number
    Icounter = 0;
    btySwitch = true;// true: display/false:hide

    //set the time and frequency listwidget goes horizontally
    ui->listWidget_time->setFlow(QListView::Flow::LeftToRight);
    ui->listWidget_frequency->setFlow(QListView::Flow::LeftToRight);

    //connect the slot functions and buttons
    connect(ui->pushButton_power,SIGNAL(pressed()),this,SLOT(powerBtn()));
    connect(ui->pushButton_up,SIGNAL(released()),this,SLOT(up()));
    connect(ui->pushButton_down,SIGNAL(released()),this,SLOT(down()));
    connect(ui->pushButton_check,SIGNAL(released()),this,SLOT(conform()));
    connect(ui->pushButton_change,SIGNAL(released()),this,SLOT(changeBty()));

    connect(ui->pushButton_save,SIGNAL(released()),this,SLOT(save()));
    connect(ui->pushButton_record,SIGNAL(released()),this,SLOT(startRecord()));

    connect(ui->pushButton_changeLevel,SIGNAL(released()),this,SLOT(changeLevel()));

    //connect control Panel functions
    connect(ui->comboBox_ecc,SIGNAL(currentIndexChanged(int)),this, SLOT(changeEcc(int)));
    connect(ui->comboBox_cl, SIGNAL(currentIndexChanged(int)),this, SLOT(changeCl(int)));
    connect(ui->comboBox_ipt,SIGNAL(currentIndexChanged(int)),this, SLOT(changeCS(int)));
    connect(ui->comboBox_opt, SIGNAL(currentIndexChanged(int)),this, SLOT(changeCS(int)));

    //connect the qtimer
    connect(btyTimer,SIGNAL(timeout()),this,SLOT(updateBty()));
    connect(sessionTimer,SIGNAL(timeout()),this,SLOT(updateSession()));
    connect(flashTimer, SIGNAL(timeout()), this, SLOT(blink()));
    connect(shutdownTimer, SIGNAL(timeout()), this, SLOT(shutdown()));
    connect(softSDTimer, SIGNAL(timeout()), this, SLOT(softShutDown()));


    //battery default setting
    bty = new battery(100, 100000, 1);
    ui->battery->setRange(0, bty->getLevel());
    ui->battery->setValue(bty->getLevel());
    ui->label_btylevel->setText("100%");
    btyTimer->setInterval(1000);

    //session and flash default setting (1s)
    sessionTimer->setInterval(10);
    flashTimer->setInterval(500);
    shutdownTimer->setInterval(20000);
    softSDTimer->setInterval(300);

    //init user time design
    ui->spinBox_h->setMaximum(10);
    ui->spinBox_m->setMaximum(59);
    ui->spinBox_s->setMaximum(59);

    //history record
    r = new record("N/A", intensity, sTimer);

    //set low battery reminder invisable
    ui->label_btylow->setVisible(false);
}

mainwindow::~mainwindow(){
    delete ui;
    delete r;
    delete btyTimer;
    delete sessionTimer;
    delete flashTimer;
    delete shutdownTimer;

    for(int i = recordCounter;i>0;i--){
        delete rArray[i];
    }
    delete [] rArray;
}

/*
 * powerBtn():
 * in: None
 * out: None
 */
void mainwindow::powerBtn(){
    //if current state is power off then power on
    if(!power){
        QThread::msleep(2000);
        //setting tdcs and battary light color     
        initIntensity();
        initClColor();

        //set the power light to green
        ui->label_tdcs->setStyleSheet("font: bold 14px;font-size: 25px;color: red;");
        ui->label_powerLight->setStyleSheet("background-color: rgb(4,237,0);");
        ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
        ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
        ui->comboBox_ecc->setCurrentIndex(0);
        ui->comboBox_cl->setCurrentIndex(0);
        ui->label_itsy->setText(tr("%1").arg(intensity));
        ecc = true;

        power = true;
        mode = 0;

        //start battery
        btyTimer->start();

    }//if current state is power on and not at initial mode then power off
    else if(mode != 0 && power){
        shutdown();
    }//enter time selecting mode
    else if(power && mode == 0){
        //set frequency and time light color
        ui->listWidget_time->item(0)->setForeground(Qt::green);
        ui->listWidget_time->item(1)->setForeground(Qt::yellow);
        ui->listWidget_time->item(2)->setForeground(Qt::green);

        ui->listWidget_frequency->item(0)->setForeground(Qt::yellow);
        ui->listWidget_frequency->item(1)->setForeground(Qt::green);
        ui->listWidget_frequency->item(2)->setForeground(Qt::yellow);
        ui->listWidget_frequency->item(3)->setForeground(Qt::green);

        mode = 1;
        shutdownTimer->start();
    }
}

/*
 * up():
 * in: None
 * out: None
 */
//last selected listwidget item
void mainwindow::up(){
    if(mode == 1){
        if (sCounter - 1 <= -1) sCounter = 2;
        else sCounter --;
        ui->listWidget_time->item(sCounter)->setSelected(true);
    }else if(mode == 2){
        if (sCounter - 1 <= -1) sCounter = 3;
        else sCounter --;
        ui->listWidget_frequency->item(sCounter)->setSelected(true);
    }else if(mode == 3){
        if (sCounter - 1 <= -1) sCounter = 7;
        else sCounter --;
        ui->listWidget_tdcs->item(sCounter)->setSelected(true);
    }else if(mode == 4){
        initIntensity();
        mode = 3;
    }
}

/*
 * down():
 * in: None
 * out: None
 */
//next selected listwidget item
void mainwindow::down(){
    if(mode == 1){
        if (sCounter + 1 >= 3) sCounter = 0;
        else sCounter ++;
        ui->listWidget_time->item(sCounter)->setSelected(true);
    }else if(mode == 2){
        if (sCounter + 1 >= 4) sCounter = 0;
        else sCounter ++;
        ui->listWidget_frequency->item(sCounter)->setSelected(true);
    }else if(mode == 3){
        if (sCounter + 1 >= 8) sCounter = 0;
        else sCounter ++;
        ui->listWidget_tdcs->item(sCounter)->setSelected(true);
    }else if(mode == 4){
        initIntensity();
        mode = 3;
    }
}

/*
 * conform():
 * in: None
 * out: None
 */
void mainwindow::conform(){
    if(mode == 1){ //select time
        ui->label_endtime->setText(calculateTime(sCounter));
        ui->listWidget_time->item(sCounter)->setSelected(false);
        mode = 2;
        sCounter = 0;
        ui->listWidget_frequency->item(sCounter)->setSelected(true);
        shutdownTimer->stop();
    }else if(mode == 2){//select session
        ui->label_session->setText(ui->listWidget_frequency->item(sCounter)->text());
        st = ui->label_session->text();
        //5sec delay with selecting item flashing
        //QThread::msleep(5000);
        //ui->listWidget_frequency->item(sCounter)->setSelected(false);
        flashTimer->start();
        //start session timer
        //sessionTimer->start();
        mode = 3;
        //set default connection level to 1(best)
        selectCl(7 - ui->comboBox_cl->currentIndex());

    }else if(mode == 3){
        initIntensity();
        ui->listWidget_tdcs->item(sCounter)->setSelected(false);
        for(int i=0; i<8; i++){
            if(i != sCounter)
                ui->listWidget_tdcs->item(i)->setForeground(Qt::white);
        }
        intensity = 8 - sCounter;
        ui->label_itsy->setText(tr("%1").arg(intensity));
        sCounter = 0;
        mode = 4;
        bty->setCost(intensity);
        //not enough battery to finish the session

    }
}

/*
 * calculateTime(int i):
 * in: int i
 * out: QString
 */
QString mainwindow::calculateTime(int i){
    if(i == 0){//20 min session
        sTimer = 1200;
        r->setDuration(sTimer);
        du = sTimer;
        return "20 minutes";
    }
    else if(i == 1){//40 min session
        sTimer = 2700;
        r->setDuration(sTimer);
        du = sTimer;
        return "45 minutes";
    }
    else if(i == 2){//user designed session
        int h = ui->spinBox_h->value();
        int m = ui->spinBox_m->value();
        int s = ui->spinBox_s->value();
        sTimer = h*3600 + m*60 + s;
        r->setDuration(sTimer);
        du = sTimer;
        return "user designed session";
    }
    else{//error
        return "error";
    }
}

/*
 * updateBty():
 * in: None
 * out: None
 */
void mainwindow::updateBty(){
    bty->setPower(bty->getPower() - bty->getCost());
    bty->calculateLevel();
    ui->battery->setValue(bty->getLevel());
    //update the battery percentage
    ui->label_btylevel->setText(tr("%1").arg(bty->getLevel()) + "%");
    //Shut down when there is no power left
    if(bty->getPower() <= 0 || !power){
        shutdown();
    }else if(bty->getPower() <= 20000){
        ui->label_btylow->setVisible(true);
        ui->battery->setStyleSheet("QProgressBar {color:black;}QProgressBar::chunk {background-color: red;}");
    }
    if(!bty->enoughPower(sTimer * bty->getCost())){
        ui->label_btylevel->setText("no enough power");
        sessionTimer->stop();
    }
    if(bty->getPower() <= 20000 && btySwitch){
        ui->battery->setVisible(false);
        btySwitch = false;
    }else if(bty->getPower() <= 20000 && !btySwitch){
        ui->battery->setVisible(true);
        btySwitch = true;
    }
}

/*
 * changeBty():
 * in: None
 * out: None
 */
void mainwindow::changeBty(){
    //set battery to 100%
    bty->setPower(100000);
    bty->calculateLevel();
    ui->battery->setValue(bty->getLevel());
    ui->label_btylevel->setText("100%");
    ui->label_btylow->setVisible(false);
    ui->battery->setVisible(true);
    ui->battery->setStyleSheet("QProgressBar {color:black;}QProgressBar::chunk {background-color: green;}");
}

/*
 * updateSession():
 * in: None
 * out: None
 */
void mainwindow::updateSession(){
    //seconds - 1
    sTimer--;
    //change seconds to hour : min : sec
    int hour = sTimer/3600;
    int min = (sTimer - hour*3600)/60;
    int sec = sTimer % 60;
    //add zero-padding ("1" -> "01")
    QString h = QStringLiteral("%1").arg(hour, 2, 10, QLatin1Char('0'));
    QString m = QStringLiteral("%1").arg(min, 2, 10, QLatin1Char('0'));
    QString s = QStringLiteral("%1").arg(sec, 2, 10, QLatin1Char('0'));
    //update time label
    ui->label_endtime->setText(h + ":" + m + ":" + s);
    //stop when session time out
    if(!ecc || cl >= 7){
        sessionTimer->stop();
    }
    if(sTimer <= 0 ){
        shutdown();
    }
}

/*
 * blink():
 * in: None
 * out: None
 */
void mainwindow::blink(){
    mode = 5;
    //start session after 5 sec
    if(flashSwitch < 0) {
        flashTimer->stop();
        sessionTimer->start();
        ui->listWidget_frequency->item(sCounter)->setSelected(false);
        sCounter = 7;
        mode = 4;
        for(int i=0; i<8; i++){
            if(i != sCounter)
                ui->listWidget_tdcs->item(i)->setForeground(Qt::white);
        }
    }
    else if(flashSwitch%2 == 0){//open light
        ui->listWidget_frequency->item(sCounter)->setSelected(false);
        flashSwitch --;
    }
    else{//close light
        ui->listWidget_frequency->item(sCounter)->setSelected(true);
        flashSwitch --;
    }
}

/*
 * shutdown():
 * in: None
 * out: None
 */
void mainwindow::shutdown(){
    //setting all light to white(off)
    ui->listWidget_time->item(0)->setForeground(Qt::white);
    ui->listWidget_time->item(1)->setForeground(Qt::white);
    ui->listWidget_time->item(2)->setForeground(Qt::white);

    ui->listWidget_frequency->item(0)->setForeground(Qt::white);
    ui->listWidget_frequency->item(1)->setForeground(Qt::white);
    ui->listWidget_frequency->item(2)->setForeground(Qt::white);
    ui->listWidget_frequency->item(3)->setForeground(Qt::white);

    ui->listWidget_level->item(0)->setForeground(Qt::white);
    ui->listWidget_level->item(1)->setForeground(Qt::white);
    ui->listWidget_level->item(2)->setForeground(Qt::white);
    ui->listWidget_level->item(3)->setForeground(Qt::white);
    ui->listWidget_level->item(4)->setForeground(Qt::white);
    ui->listWidget_level->item(5)->setForeground(Qt::white);
    ui->listWidget_level->item(6)->setForeground(Qt::white);
    ui->listWidget_level->item(7)->setForeground(Qt::white);

    initIntensity();
    softSDTimer->start();

    //history record
    r->setSType(ui->label_session->text());
    r->setIntensity(intensity);
    if(r->getSType() != "N/A")
        ui->listWidget_history->addItem(r->toString());

    //set power light to white(off)
    ui->label_tdcs->setStyleSheet("font: bold 14px;font-size: 25px;color: white;");
    ui->label_powerLight->setStyleSheet("background-color: rgb(255,255,255);");
    ui->label_endtime->setText("N/A");
    ui->label_session->setText("N/A");

    ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");
    ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");

    mode = 0;
    power = false;
    cl = 1;

    //stop battery timer
    btyTimer->stop();
    sessionTimer->stop();
    flashTimer->stop();

    updateIntensity();


}

/*
 * changeEcc(int index):
 * in: int index
 * out: None
 */
void mainwindow::changeEcc(int index){
    if(power){
        if(index == 0 ){
            ecc = true;
            if(ui->comboBox_ipt->currentIndex() == 0 && ui->comboBox_opt->currentIndex() == 0){
                ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
                ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
                cl = 1;
                selectCl(7);
            }

        }else if(index == 1){
            ecc = false;
            ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
            ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");
            cl = 7;
            selectCl(1);
        }else if(index == 2){
            ecc = false;
            ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");
            ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:green");
            cl = 7;
            selectCl(1);
        }else{
            ecc = false;
            ui->label_L->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");
            ui->label_R->setStyleSheet("color: white; background-color:transparent; font: 17pt; color:white");
            cl = 8;
            selectCl(0);
        }
    }
    if(!sessionTimer->isActive() && (mode == 3 || mode == 4)){
        sessionTimer->start();
    }
}

/*
 * changeCl(int index):
 * in: int index
 * out: None
 */
//Change connection level
void mainwindow::changeCl(int index){
    if(power){
        cl = index + 1;
        selectCl(8-cl);
    }
    if(!sessionTimer->isActive() && (mode == 3 || mode == 4)){
        sessionTimer->start();
    }
}

/*
 * changeCS(int index):
 * in: int index
 * out: None
 */
//change input/output connection
void mainwindow::changeCS(int index){
    if(power){
        if(ui->comboBox_ipt->currentIndex() == 0 && ui->comboBox_opt->currentIndex() == 0 && ui->comboBox_ecc->currentIndex() == 0){
            cl = 1;
            selectCl(7);
        }else if(index == 1){
            cl = 7;
            selectCl(1);
        }
        if(!sessionTimer->isActive() && (mode == 3 || mode == 4)){
            sessionTimer->start();
        }
    }
}

/*
 * initClColor():
 * in: None
 * out: None
 */
//connection level color
void mainwindow::initClColor(){
    ui->listWidget_level->item(0)->setForeground(Qt::red);
    ui->listWidget_level->item(1)->setForeground(Qt::red);
    ui->listWidget_level->item(2)->setForeground(Qt::yellow);
    ui->listWidget_level->item(3)->setForeground(Qt::yellow);
    ui->listWidget_level->item(4)->setForeground(Qt::yellow);
    ui->listWidget_level->item(5)->setForeground(Qt::green);
    ui->listWidget_level->item(6)->setForeground(Qt::green);
    ui->listWidget_level->item(7)->setForeground(Qt::green);
}

/*
 * selectCl(int index):
 * in: int index
 * out: None
 */
//select connection level
void mainwindow::selectCl(int index){
    initClColor();
    for(int i=0; i<8; i++){
        if(i != index)
            ui->listWidget_level->item(i)->setForeground(Qt::white);
    }
}

/*
 * initIntensity():
 * in: None
 * out: None
 */
//initializes the intensity color
void mainwindow::initIntensity(){
    ui->listWidget_tdcs->item(0)->setForeground(Qt::red);
    ui->listWidget_tdcs->item(1)->setForeground(Qt::red);
    ui->listWidget_tdcs->item(2)->setForeground(Qt::yellow);
    ui->listWidget_tdcs->item(3)->setForeground(Qt::yellow);
    ui->listWidget_tdcs->item(4)->setForeground(Qt::yellow);
    ui->listWidget_tdcs->item(5)->setForeground(Qt::green);
    ui->listWidget_tdcs->item(6)->setForeground(Qt::green);
    ui->listWidget_tdcs->item(7)->setForeground(Qt::green);
}

/*
 * save():
 * in: None
 * out: None
 */
//saves record
void mainwindow::save(){
    if(st == ""){
        return;
    }
    //checks for duplicates
    for(int i = 0;i<recordCounter;i++){
        if(rArray[i]->getSType() == st && rArray[i]->getDuration() == du && rArray[i]->getIntensity() == intensity){
            return;
        }
    }
    rArray[recordCounter] = new record();
    rArray[recordCounter] -> setSType(st);
    rArray[recordCounter] -> setIntensity(intensity);
    rArray[recordCounter] -> setDuration(du);
    ui->listWidget_record->addItem(rArray[recordCounter]->toString());
    recordCounter ++;
}

/*
 * startRecord():
 * in: None
 * out: None
 */
//starts session from record
void mainwindow::startRecord(){
    if(this->ui->listWidget_record->selectedItems().size() != 0){
        int i = ui->listWidget_record->currentRow();
        QString session = rArray[i] -> getSType();
        int time = rArray[i] -> getDuration();
        intensity = rArray[i] -> getIntensity();
        power = false;
        powerBtn();
        ui->listWidget_time->item(0)->setForeground(Qt::green);
        ui->listWidget_time->item(1)->setForeground(Qt::yellow);
        ui->listWidget_time->item(2)->setForeground(Qt::green);

        ui->listWidget_frequency->item(0)->setForeground(Qt::yellow);
        ui->listWidget_frequency->item(1)->setForeground(Qt::green);
        ui->listWidget_frequency->item(2)->setForeground(Qt::yellow);
        ui->listWidget_frequency->item(3)->setForeground(Qt::green);
        mode = 4;
        selectCl(8-cl);

        for(int i=0; i<8; i++){
            if(i != 8-intensity)
                ui->listWidget_tdcs->item(i)->setForeground(Qt::white);
        }

        ui->label_session->setText(session);
        ui->label_itsy->setText(tr("%1").arg(intensity));
        sTimer = time;


        sessionTimer->start();
    }
}

/*
 * changeLevel():
 * in: None
 * out: None
 */
//change battery level for debugging
void mainwindow::changeLevel(){
    int level = ui->spinBox_battery->value();
    bty->setPower(level * 1000);
    bty->setLevel(level);
    btyTimer->start();
    if(level >= 20){
        ui->label_btylow->setVisible(false);
        ui->battery->setVisible(true);
        ui->battery->setStyleSheet("QProgressBar {color:black;}QProgressBar::chunk {background-color: green;}");
    }
}

/*
 * updateIntensity():
 * in: None
 * out: None
 */
//updates intensity in the records
void mainwindow::updateIntensity(){
    if(this->ui->listWidget_record->selectedItems().size() != 0){
        int i = ui->listWidget_record->currentRow();
        if(rArray[i] -> getSType() == st && rArray[i] -> getDuration() == du){
            rArray[i]->setIntensity(intensity);
            ui->listWidget_record->item(i)->setText(rArray[i]->toString());
        }
    }
}

/*
 * softShutDown():
 * in: None
 * out: None
 */
//soft shutdown lights
void mainwindow::softShutDown(){
    ui->listWidget_tdcs->item(Icounter)->setForeground(Qt::white);
    Icounter ++;
    if(Icounter == 8){
        Icounter = 0;
        softSDTimer->stop();
    }
}




