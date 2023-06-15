using namespace std;
#include "Combat.h"
#include <iostream>

Combat::Combat(const string& niveau) : niveau(niveau) {}

Combat::~Combat() {}

const string& Combat::getNiveau() const {
    return niveau;
}

void Combat::setCoinBleu(Boxeur* boxeur) {
    coinBleu = boxeur;
}

Boxeur* Combat::getCoinBleu() const {
    return coinBleu;
}

void Combat::setCoinRouge(Boxeur* boxeur) {
    coinRouge = boxeur;
}

Boxeur* Combat::getCoinRouge() const {
    return coinRouge;
}

Boxeur* Combat::DesignerVainqueur(const string& couleurCoin) {
    if (couleurCoin == "rouge") {
        vainqueur = coinRouge;
    }
    else if (couleurCoin == "bleu") {
        vainqueur = coinBleu;
    }
    else {
        vainqueur = nullptr;
    }
    return vainqueur;
}

Boxeur* Combat::getVainqueur() const {
    return vainqueur;
}




