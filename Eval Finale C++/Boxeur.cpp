#include "Boxeur.h"
#include <iostream>
using namespace std;


Boxeur::Boxeur(const string& nom, double poids) : nom(nom), poids(poids) {}

const string& Boxeur::getNom() const {
    return nom;
}

double Boxeur::getPoids() const {
    return poids;
}

void Boxeur::setPoids(double Npoids) {
    poids = Npoids;
}
