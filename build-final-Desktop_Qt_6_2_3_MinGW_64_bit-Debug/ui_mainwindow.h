/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QPushButton *pushButton_check;
    QPushButton *pushButton_power;
    QLabel *label_powerLight;
    QListWidget *listWidget_level;
    QListWidget *listWidget_tdcs;
    QLabel *label_tdcs;
    QListWidget *listWidget_time;
    QListWidget *listWidget_frequency;
    QLabel *label_frame;
    QLabel *label_logo;
    QProgressBar *battery;
    QComboBox *comboBox_cl;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_ecc;
    QPushButton *pushButton_change;
    QLabel *label_5;
    QLabel *label_btylevel;
    QLabel *label_endtime;
    QLabel *label_session;
    QLabel *label_L;
    QLabel *label_R;
    QLabel *label_6;
    QLabel *label_itsy;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox_opt;
    QComboBox *comboBox_ipt;
    QLabel *label_9;
    QSpinBox *spinBox_h;
    QSpinBox *spinBox_m;
    QSpinBox *spinBox_s;
    QLabel *label_frame_2;
    QLabel *label_frame_3;
    QListWidget *listWidget_history;
    QListWidget *listWidget_record;
    QPushButton *pushButton_save;
    QPushButton *pushButton_record;
    QSpinBox *spinBox_battery;
    QPushButton *pushButton_changeLevel;
    QLabel *label_btylow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1253, 695);
        mainwindow->setAutoFillBackground(false);
        mainwindow->setStyleSheet(QString::fromUtf8("background-color:black;"));
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_up = new QPushButton(centralwidget);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(420, 270, 71, 71));
        pushButton_up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(254,253,0);\n"
"    font-size: 30px;\n"
"    border: 4px solid rgb(135,209,199);\n"
"    border-radius: 35px;\n"
"    border-style: outset;\n"
"    background-color: black;\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}"));
        pushButton_down = new QPushButton(centralwidget);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(420, 350, 71, 71));
        pushButton_down->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(254,253,0);\n"
"    font-size: 30px;\n"
"    border: 4px solid rgb(135,209,199);\n"
"    border-radius: 35px;\n"
"    border-style: outset;\n"
"    background-color: black;\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}"));
        pushButton_check = new QPushButton(centralwidget);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        pushButton_check->setGeometry(QRect(70, 350, 71, 71));
        pushButton_check->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(254,253,0);\n"
"    font-size: 30px;\n"
"    border: 4px solid rgb(135,209,199);\n"
"    border-radius: 35px;\n"
"    border-style: outset;\n"
"    background-color: black;\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}"));
        pushButton_power = new QPushButton(centralwidget);
        pushButton_power->setObjectName(QString::fromUtf8("pushButton_power"));
        pushButton_power->setGeometry(QRect(550, 350, 71, 71));
        pushButton_power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(254,253,0);\n"
"    border: 4px solid rgb(135,209,199);\n"
"    border-radius: 35px;\n"
"    border-style: outset;\n"
"    background-color: black;\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}"));
        label_powerLight = new QLabel(centralwidget);
        label_powerLight->setObjectName(QString::fromUtf8("label_powerLight"));
        label_powerLight->setGeometry(QRect(570, 330, 31, 17));
        label_powerLight->setAutoFillBackground(false);
        label_powerLight->setStyleSheet(QString::fromUtf8("background-color: white;"));
        listWidget_level = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        new QListWidgetItem(listWidget_level);
        listWidget_level->setObjectName(QString::fromUtf8("listWidget_level"));
        listWidget_level->setGeometry(QRect(210, 160, 51, 261));
        listWidget_level->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;\n"
"	}\n"
"QListView::Flow{\n"
"	setflow:LeftToRight;\n"
"}\n"
"QListWidget::item:selected {\n"
"	background: transparent;\n"
"	color: white;\n"
"    }\n"
""));
        listWidget_tdcs = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        new QListWidgetItem(listWidget_tdcs);
        listWidget_tdcs->setObjectName(QString::fromUtf8("listWidget_tdcs"));
        listWidget_tdcs->setGeometry(QRect(300, 160, 61, 261));
        listWidget_tdcs->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;\n"
"	}\n"
"QListWidget::item:selected {\n"
"	background: transparent;\n"
"	color: white;\n"
"    }"));
        label_tdcs = new QLabel(centralwidget);
        label_tdcs->setObjectName(QString::fromUtf8("label_tdcs"));
        label_tdcs->setGeometry(QRect(270, 130, 121, 31));
        label_tdcs->setStyleSheet(QString::fromUtf8("font: bold 14px;\n"
"font-size: 25px;\n"
"color: white;\n"
"   "));
        listWidget_time = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget_time);
        new QListWidgetItem(listWidget_time);
        new QListWidgetItem(listWidget_time);
        listWidget_time->setObjectName(QString::fromUtf8("listWidget_time"));
        listWidget_time->setGeometry(QRect(220, 20, 321, 41));
        listWidget_time->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;\n"
"	}\n"
"QListView::Flow{\n"
"	setflow:LeftToRight;\n"
"}\n"
"QListWidget::item:selected {\n"
"	background: transparent;\n"
"	color: white;\n"
"    }\n"
",,"));
        listWidget_frequency = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget_frequency);
        new QListWidgetItem(listWidget_frequency);
        new QListWidgetItem(listWidget_frequency);
        new QListWidgetItem(listWidget_frequency);
        listWidget_frequency->setObjectName(QString::fromUtf8("listWidget_frequency"));
        listWidget_frequency->setGeometry(QRect(220, 70, 471, 41));
        listWidget_frequency->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;\n"
"	}\n"
"QListView::Flow{\n"
"	setflow:LeftToRight;\n"
"}\n"
"QListWidget::item:selected {\n"
"	background: transparent;\n"
"	color: white;\n"
"    }\n"
""));
        label_frame = new QLabel(centralwidget);
        label_frame->setObjectName(QString::fromUtf8("label_frame"));
        label_frame->setGeometry(QRect(10, 10, 811, 431));
        label_frame->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: transparent;\n"
"}\n"
"QFrame { \n"
"   border: 6px solid white;\n"
"} "));
        label_frame->setFrameShape(QFrame::Box);
        label_frame->setFrameShadow(QFrame::Sunken);
        label_frame->setLineWidth(2);
        label_frame->setMargin(0);
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(550, 120, 241, 191));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/image/res/logo.png")));
        battery = new QProgressBar(centralwidget);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setGeometry(QRect(690, 400, 118, 23));
        battery->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"     color:black;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: green;\n"
" }"));
        battery->setValue(100);
        battery->setTextVisible(false);
        battery->setOrientation(Qt::Horizontal);
        battery->setInvertedAppearance(false);
        battery->setTextDirection(QProgressBar::TopToBottom);
        comboBox_cl = new QComboBox(centralwidget);
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->addItem(QString());
        comboBox_cl->setObjectName(QString::fromUtf8("comboBox_cl"));
        comboBox_cl->setGeometry(QRect(680, 450, 151, 41));
        comboBox_cl->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color:black;\n"
"font: 15pt ;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 461, 191, 20));
        label->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 460, 341, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 500, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 490, 221, 41));
        label_4->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        comboBox_ecc = new QComboBox(centralwidget);
        comboBox_ecc->addItem(QString());
        comboBox_ecc->addItem(QString());
        comboBox_ecc->addItem(QString());
        comboBox_ecc->addItem(QString());
        comboBox_ecc->setObjectName(QString::fromUtf8("comboBox_ecc"));
        comboBox_ecc->setGeometry(QRect(680, 490, 151, 41));
        comboBox_ecc->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color:black;\n"
"font: 12pt ;"));
        pushButton_change = new QPushButton(centralwidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(690, 360, 121, 25));
        pushButton_change->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 540, 151, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_btylevel = new QLabel(centralwidget);
        label_btylevel->setObjectName(QString::fromUtf8("label_btylevel"));
        label_btylevel->setGeometry(QRect(190, 540, 251, 31));
        label_btylevel->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_endtime = new QLabel(centralwidget);
        label_endtime->setObjectName(QString::fromUtf8("label_endtime"));
        label_endtime->setGeometry(QRect(190, 500, 261, 31));
        label_endtime->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_session = new QLabel(centralwidget);
        label_session->setObjectName(QString::fromUtf8("label_session"));
        label_session->setGeometry(QRect(190, 460, 261, 31));
        label_session->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_L = new QLabel(centralwidget);
        label_L->setObjectName(QString::fromUtf8("label_L"));
        label_L->setGeometry(QRect(640, 30, 71, 31));
        label_L->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_R = new QLabel(centralwidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setGeometry(QRect(710, 30, 71, 31));
        label_R->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 580, 151, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_itsy = new QLabel(centralwidget);
        label_itsy->setObjectName(QString::fromUtf8("label_itsy"));
        label_itsy->setGeometry(QRect(190, 580, 151, 31));
        label_itsy->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(450, 530, 221, 41));
        label_7->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(450, 570, 221, 41));
        label_8->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        comboBox_opt = new QComboBox(centralwidget);
        comboBox_opt->addItem(QString());
        comboBox_opt->addItem(QString());
        comboBox_opt->setObjectName(QString::fromUtf8("comboBox_opt"));
        comboBox_opt->setGeometry(QRect(680, 530, 151, 41));
        comboBox_opt->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color:black;\n"
"font: 12pt ;"));
        comboBox_ipt = new QComboBox(centralwidget);
        comboBox_ipt->addItem(QString());
        comboBox_ipt->addItem(QString());
        comboBox_ipt->setObjectName(QString::fromUtf8("comboBox_ipt"));
        comboBox_ipt->setGeometry(QRect(680, 570, 151, 41));
        comboBox_ipt->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color:black;\n"
"font: 12pt ;"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(450, 610, 221, 41));
        label_9->setStyleSheet(QString::fromUtf8("color: white; \n"
"	background-color:transparent;\n"
"	font: 17pt ;"));
        spinBox_h = new QSpinBox(centralwidget);
        spinBox_h->setObjectName(QString::fromUtf8("spinBox_h"));
        spinBox_h->setGeometry(QRect(680, 620, 41, 31));
        spinBox_h->setStyleSheet(QString::fromUtf8("color: white;"));
        spinBox_m = new QSpinBox(centralwidget);
        spinBox_m->setObjectName(QString::fromUtf8("spinBox_m"));
        spinBox_m->setGeometry(QRect(730, 620, 41, 31));
        spinBox_m->setStyleSheet(QString::fromUtf8("color:white;"));
        spinBox_s = new QSpinBox(centralwidget);
        spinBox_s->setObjectName(QString::fromUtf8("spinBox_s"));
        spinBox_s->setGeometry(QRect(780, 620, 41, 31));
        spinBox_s->setStyleSheet(QString::fromUtf8("color:white;"));
        label_frame_2 = new QLabel(centralwidget);
        label_frame_2->setObjectName(QString::fromUtf8("label_frame_2"));
        label_frame_2->setGeometry(QRect(840, 10, 391, 371));
        label_frame_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: transparent;\n"
"}\n"
"QFrame { \n"
"   border: 6px solid white;\n"
"} "));
        label_frame_2->setFrameShape(QFrame::Box);
        label_frame_2->setFrameShadow(QFrame::Sunken);
        label_frame_2->setLineWidth(2);
        label_frame_2->setMargin(0);
        label_frame_3 = new QLabel(centralwidget);
        label_frame_3->setObjectName(QString::fromUtf8("label_frame_3"));
        label_frame_3->setGeometry(QRect(840, 390, 391, 191));
        label_frame_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: transparent;\n"
"}\n"
"QFrame { \n"
"   border: 6px solid white;\n"
"} "));
        label_frame_3->setFrameShape(QFrame::Box);
        label_frame_3->setFrameShadow(QFrame::Sunken);
        label_frame_3->setLineWidth(2);
        label_frame_3->setMargin(0);
        listWidget_history = new QListWidget(centralwidget);
        listWidget_history->setObjectName(QString::fromUtf8("listWidget_history"));
        listWidget_history->setGeometry(QRect(860, 30, 351, 331));
        listWidget_history->setStyleSheet(QString::fromUtf8("color:white;"));
        listWidget_record = new QListWidget(centralwidget);
        listWidget_record->setObjectName(QString::fromUtf8("listWidget_record"));
        listWidget_record->setGeometry(QRect(860, 410, 351, 151));
        listWidget_record->setStyleSheet(QString::fromUtf8("color:white;"));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(860, 600, 171, 41));
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color:white;\n"
"   border: 2px solid white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}\n"
""));
        pushButton_record = new QPushButton(centralwidget);
        pushButton_record->setObjectName(QString::fromUtf8("pushButton_record"));
        pushButton_record->setGeometry(QRect(1070, 600, 151, 41));
        pushButton_record->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color:white;\n"
"   border: 2px solid white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}\n"
""));
        spinBox_battery = new QSpinBox(centralwidget);
        spinBox_battery->setObjectName(QString::fromUtf8("spinBox_battery"));
        spinBox_battery->setGeometry(QRect(20, 620, 131, 26));
        spinBox_battery->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid white;"));
        pushButton_changeLevel = new QPushButton(centralwidget);
        pushButton_changeLevel->setObjectName(QString::fromUtf8("pushButton_changeLevel"));
        pushButton_changeLevel->setGeometry(QRect(180, 620, 131, 31));
        pushButton_changeLevel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color:white;\n"
"   border: 2px solid white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background-color: RGB(20,20,20);\n"
"}\n"
""));
        label_btylow = new QLabel(centralwidget);
        label_btylow->setObjectName(QString::fromUtf8("label_btylow"));
        label_btylow->setGeometry(QRect(610, 330, 201, 20));
        label_btylow->setStyleSheet(QString::fromUtf8("color:red;"));
        mainwindow->setCentralWidget(centralwidget);
        label_frame->raise();
        pushButton_up->raise();
        pushButton_down->raise();
        pushButton_check->raise();
        pushButton_power->raise();
        label_powerLight->raise();
        listWidget_level->raise();
        listWidget_tdcs->raise();
        label_tdcs->raise();
        listWidget_time->raise();
        listWidget_frequency->raise();
        label_logo->raise();
        battery->raise();
        comboBox_cl->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        comboBox_ecc->raise();
        pushButton_change->raise();
        label_5->raise();
        label_btylevel->raise();
        label_endtime->raise();
        label_session->raise();
        label_L->raise();
        label_R->raise();
        label_6->raise();
        label_itsy->raise();
        label_7->raise();
        label_8->raise();
        comboBox_opt->raise();
        comboBox_ipt->raise();
        label_9->raise();
        spinBox_h->raise();
        spinBox_m->raise();
        spinBox_s->raise();
        label_frame_2->raise();
        label_frame_3->raise();
        listWidget_history->raise();
        listWidget_record->raise();
        pushButton_save->raise();
        pushButton_record->raise();
        spinBox_battery->raise();
        pushButton_changeLevel->raise();
        label_btylow->raise();
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1253, 22));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindow->setStatusBar(statusbar);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        pushButton_up->setText(QCoreApplication::translate("mainwindow", "\342\226\262", nullptr));
        pushButton_down->setText(QCoreApplication::translate("mainwindow", "\342\226\274", nullptr));
        pushButton_check->setText(QCoreApplication::translate("mainwindow", "\342\234\224\357\270\217", nullptr));
        pushButton_power->setText(QCoreApplication::translate("mainwindow", "POWER", nullptr));
        label_powerLight->setText(QString());

        const bool __sortingEnabled = listWidget_level->isSortingEnabled();
        listWidget_level->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_level->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("mainwindow", "\342\226\2568\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_level->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("mainwindow", "\342\226\2567\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_level->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("mainwindow", "\342\226\2566\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_level->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("mainwindow", "\342\226\2565\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_level->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("mainwindow", "\342\226\2564\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_level->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("mainwindow", "\342\226\2563\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_level->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("mainwindow", "\342\226\2562\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_level->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("mainwindow", "\342\226\2561\342\226\256", nullptr));
        listWidget_level->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_tdcs->isSortingEnabled();
        listWidget_tdcs->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = listWidget_tdcs->item(0);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("mainwindow", "\342\226\2568\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_tdcs->item(1);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("mainwindow", "\342\226\2567\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_tdcs->item(2);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("mainwindow", "\342\226\2566\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_tdcs->item(3);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("mainwindow", "\342\226\2565\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_tdcs->item(4);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("mainwindow", "\342\226\2564\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_tdcs->item(5);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("mainwindow", "\342\226\2563\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_tdcs->item(6);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("mainwindow", "\342\226\2562\342\226\256", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_tdcs->item(7);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("mainwindow", "\342\226\2561\342\226\256", nullptr));
        listWidget_tdcs->setSortingEnabled(__sortingEnabled1);

        label_tdcs->setText(QCoreApplication::translate("mainwindow", "Intensity", nullptr));

        const bool __sortingEnabled2 = listWidget_time->isSortingEnabled();
        listWidget_time->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem16 = listWidget_time->item(0);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("mainwindow", "20  ", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget_time->item(1);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("mainwindow", "45  ", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget_time->item(2);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("mainwindow", "\342\212\225   ", nullptr));
        listWidget_time->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = listWidget_frequency->isSortingEnabled();
        listWidget_frequency->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem19 = listWidget_frequency->item(0);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("mainwindow", "s\316\224   ", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget_frequency->item(1);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("mainwindow", "\316\270    ", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget_frequency->item(2);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("mainwindow", "\316\261    ", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget_frequency->item(3);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("mainwindow", "\316\2622   ", nullptr));
        listWidget_frequency->setSortingEnabled(__sortingEnabled3);

        label_frame->setText(QString());
        label_logo->setText(QString());
        comboBox_cl->setItemText(0, QCoreApplication::translate("mainwindow", "\342\226\2561\342\226\256", nullptr));
        comboBox_cl->setItemText(1, QCoreApplication::translate("mainwindow", "\342\226\2562\342\226\256", nullptr));
        comboBox_cl->setItemText(2, QCoreApplication::translate("mainwindow", "\342\226\2563\342\226\256", nullptr));
        comboBox_cl->setItemText(3, QCoreApplication::translate("mainwindow", "\342\226\2564\342\226\256", nullptr));
        comboBox_cl->setItemText(4, QCoreApplication::translate("mainwindow", "\342\226\2565\342\226\256", nullptr));
        comboBox_cl->setItemText(5, QCoreApplication::translate("mainwindow", "\342\226\2566\342\226\256", nullptr));
        comboBox_cl->setItemText(6, QCoreApplication::translate("mainwindow", "\342\226\2567\342\226\256", nullptr));
        comboBox_cl->setItemText(7, QCoreApplication::translate("mainwindow", "\342\226\2568\342\226\256", nullptr));

        label->setText(QCoreApplication::translate("mainwindow", "connection level:", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindow", "Session: ", nullptr));
        label_3->setText(QCoreApplication::translate("mainwindow", "Time: ", nullptr));
        label_4->setText(QCoreApplication::translate("mainwindow", "ear clips connection:", nullptr));
        comboBox_ecc->setItemText(0, QCoreApplication::translate("mainwindow", "both connected", nullptr));
        comboBox_ecc->setItemText(1, QCoreApplication::translate("mainwindow", "left connected", nullptr));
        comboBox_ecc->setItemText(2, QCoreApplication::translate("mainwindow", "right connected", nullptr));
        comboBox_ecc->setItemText(3, QCoreApplication::translate("mainwindow", "not connected", nullptr));

        pushButton_change->setText(QCoreApplication::translate("mainwindow", "change battery", nullptr));
        label_5->setText(QCoreApplication::translate("mainwindow", "battery level: ", nullptr));
        label_btylevel->setText(QCoreApplication::translate("mainwindow", "N/A", nullptr));
        label_endtime->setText(QCoreApplication::translate("mainwindow", "N/A", nullptr));
        label_session->setText(QCoreApplication::translate("mainwindow", "N/A", nullptr));
        label_L->setText(QCoreApplication::translate("mainwindow", "\360\237\227\246 L \360\237\227\247", nullptr));
        label_R->setText(QCoreApplication::translate("mainwindow", "\360\237\227\246 R \360\237\227\247", nullptr));
        label_6->setText(QCoreApplication::translate("mainwindow", "Intensity:", nullptr));
        label_itsy->setText(QCoreApplication::translate("mainwindow", "N/A", nullptr));
        label_7->setText(QCoreApplication::translate("mainwindow", "output:", nullptr));
        label_8->setText(QCoreApplication::translate("mainwindow", "input: ", nullptr));
        comboBox_opt->setItemText(0, QCoreApplication::translate("mainwindow", "connected", nullptr));
        comboBox_opt->setItemText(1, QCoreApplication::translate("mainwindow", "unconnected", nullptr));

        comboBox_ipt->setItemText(0, QCoreApplication::translate("mainwindow", "connected", nullptr));
        comboBox_ipt->setItemText(1, QCoreApplication::translate("mainwindow", "unconnected", nullptr));

        label_9->setText(QCoreApplication::translate("mainwindow", "user design time:", nullptr));
        label_frame_2->setText(QString());
        label_frame_3->setText(QString());
        pushButton_save->setText(QCoreApplication::translate("mainwindow", "save record", nullptr));
        pushButton_record->setText(QCoreApplication::translate("mainwindow", "start this session", nullptr));
        pushButton_changeLevel->setText(QCoreApplication::translate("mainwindow", "change battery level", nullptr));
        label_btylow->setText(QCoreApplication::translate("mainwindow", "battery low please change battery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
