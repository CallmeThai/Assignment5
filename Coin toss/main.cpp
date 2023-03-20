#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Coin.h"
using namespace std;
int main() {
    Coin myCoin;
    cout << "The initial side facing up is: " << myCoin.getSideUp() << std::endl;

    int numHeads = 0, numTails = 0;
    for (int i = 0; i < 20; i++) {
        myCoin.toss();
        cout << "Toss " << i+1 << ": " << myCoin.getSideUp() << std::endl;
        if (myCoin.getSideUp() == "heads") {
            numHeads++;
        }
        else {
            numTails++;
        }
    }

    cout << "Number of times heads was facing up: " << numHeads << std::endl;
    cout << "Number of times tails was facing up: " << numTails << std::endl;

    return 0;
}