#include <iostream>
#include <cstdlib>
using namespace std;
class Temperature
{
private:
    int temperature;
public:
    Temperature(int temp);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void setTemperature(int temp);
    int getTemperature();

};
