#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "battery.h"
#include "record.h"

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void powerBtn();
    void up();
    void down();
    void blink();
    void conform();
    void shutdown();
    void updateBty();
    void changeBty();
    void initClColor();
    void initIntensity();
    void updateSession();
    void updateIntensity();
    void softShutDown();

    void save();
    void startRecord();

    void selectCl(int);
    void changeCl(int);
    void changeCS(int);
    void changeEcc(int);
    void changeLevel();
    QString calculateTime(int);

private:
    Ui::mainwindow *ui;

    bool power;
    bool ecc;
    bool btySwitch;

    int cl;
    int mode;
    int sCounter;
    int intensity;
    int sTimer;
    int flashSwitch;
    int recordCounter;
    int Icounter;

    battery *bty;
    record* r;

    QString st; //session type
    int in; //intensity
    int du; //duration

    QTimer *btyTimer;
    QTimer *flashTimer;
    QTimer *sessionTimer;
    QTimer *shutdownTimer;
    QTimer *softSDTimer;
};
#endif // MAINWINDOW_H
