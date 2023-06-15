#pragma once
#include <string>
using namespace std;

class Boxeur {
private:
    string nom;
    double poids;

public:
    Boxeur(const string& nom, double poids);

    const string& getNom() const;
    double getPoids() const;
    void setPoids(double Npoids);
};

