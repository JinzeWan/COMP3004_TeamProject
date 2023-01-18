#ifndef BATTERY_H
#define BATTERY_H


class battery
{
public:
    battery(int,int,int);
    int getLevel();
    int getPower();
    int getCost();
    void setLevel(int );
    void setPower(int );
    void calculateLevel();
    void setCost(int);
    bool enoughPower(int);

private:
    int batteryLevel;
    int batteryPower;
    int PowerCost;

};

#endif // BATTERY_H
