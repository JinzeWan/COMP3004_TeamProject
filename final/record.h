#ifndef RECORD_H
#define RECORD_H

#include <QString>

class record {

public:
    record(const QString& sType, int intensity, int duration);
    record();

    void setIntensity(int);
    void setDuration(int);
    void setSType(QString);

    QString toString();
    QString getSType();

    int getIntensity();
    int getDuration(); //Seconds

private:
    QString sType;
    int intensity;
    int duration;

};

#endif // RECORD_H
