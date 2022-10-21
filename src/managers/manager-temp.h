#include <Arduino.h>

#ifndef TEMP_MANAGER_H
#define TEMP_MANAGER_H

class TempManager
{

public:
    TempManager();
    void tick();
    float getTemperature();

private:
    float currentTemp;
};

#endif