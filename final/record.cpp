#include "record.h"

record::record(const QString& sType, int intensity, int duration){
        this->sType = sType;
        this->intensity = intensity;
        this->duration = duration;

}

record::record(){
        this->sType = "N/A";
        this->intensity = 1;
        this->duration = 0;

}

//generates the string for the record
QString record::toString() {
    int min = duration / 60;
    int sec = duration % 60;
    QString newString = "Session Type: " + sType + "  intensity: " + QString::number(intensity) + "   duration: " + QString::number(min) + "min " + QString::number(sec) + "sec";

    return newString;
}


// getters
QString record::getSType() { return sType; }
int record::getIntensity() { return intensity; }
int record::getDuration() { return duration; }


// setters
void record::setSType(QString s) {sType = s;}
void record::setIntensity(int p) { intensity = p; }
void record::setDuration(int d) { duration = d; }
