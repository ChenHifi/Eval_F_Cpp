using namespace std;
#include "Combat.h"
#include <iostream>

Combat::Combat(const string& niveau) : niveau(niveau) {}

Combat::~Combat() {}

const string& Combat::getNiveau() const {
    return niveau;
}
