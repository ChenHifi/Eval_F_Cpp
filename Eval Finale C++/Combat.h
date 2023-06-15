using namespace std;
#pragma once
#include <string>
#include "Boxeur.h"

class Combat {
private:
    string niveau;

public:
    Combat(const string& niveau);
    ~Combat();

    const string& getNiveau() const;
};

