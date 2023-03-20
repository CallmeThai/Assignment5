#include <iostream>
#include "Coin.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
Coin::Coin() {
    srand(time(nullptr)); // seed the random number generator with the current time
    if (rand() % 2 == 0) {
        sideUp = "heads";
    }
    else {
        sideUp = "tails";
    }
}

void Coin::toss() {
    if (rand() % 2 == 0) {
        sideUp = "heads";
    }
    else {
        sideUp = "tails";
    }
}

string Coin::getSideUp() {
    return sideUp;
}
