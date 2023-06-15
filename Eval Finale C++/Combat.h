using namespace std;
#pragma once
#include <string>
#include "Boxeur.h"

class Combat {
private:
    string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    Combat(const string& niveau);
    ~Combat();

    const string& getNiveau() const;

    void setCoinBleu(Boxeur* boxeur);
    Boxeur* getCoinBleu() const;

    void setCoinRouge(Boxeur* boxeur);
    Boxeur* getCoinRouge() const;

    Boxeur* DesignerVainqueur(const string& couleurCoin);
    Boxeur* getVainqueur() const;
};

