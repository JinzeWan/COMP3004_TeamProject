#include "battery.h"

battery::battery(int batteryLevel, int batteryPower, int PowerCost)
{
    this-> batteryLevel = batteryLevel;
    this-> batteryPower = batteryPower;
    this-> PowerCost = PowerCost;
}

// getters
int battery::getLevel() { return batteryLevel; }
int battery::getPower() { return batteryPower; }
int battery::getCost() {return PowerCost;}


// setters
void battery::setLevel(int l) { batteryLevel = l; }
void battery::setPower(int l) { batteryPower = l; }
void battery::setCost(int c) {PowerCost = c;}

//calculates the level
void battery::calculateLevel(){
    batteryLevel = batteryPower / 1000;
}

//checks if enough power
bool battery::enoughPower(int cost){
    if(batteryPower > cost){
        return true;
    }else{
        return false;
    }
}
