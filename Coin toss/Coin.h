#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Coin{
    public:
    Coin(); 
    void toss(); 
    string getSideUp(); 
private:
    string sideUp; 
};