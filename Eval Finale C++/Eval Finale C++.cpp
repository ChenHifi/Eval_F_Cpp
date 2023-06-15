using namespace std;
#include "Boxeur.h"
#include "Combat.h"
#include <iostream>

void AfficheResultats(Combat competitions[]) {
    for (int i = 0; i < 3; i++) {
        Combat combat = competitions[i];
        cout << "Combat : " << combat.getNiveau() << endl;
        cout << "Coin bleu : " << combat.getCoinBleu()->getNom() << endl;
        cout << "Coin rouge : " << combat.getCoinRouge()->getNom() << endl;
        if (combat.getVainqueur() != nullptr) {
            cout << "Vainqueur : " << combat.getVainqueur()->getNom() << endl;
        }
        else {
            cout << "Aucun vainqueur désigné." << endl;
        }
        cout << endl;
    }
}

int main() {
    Boxeur boxeur_1("Box_1", 75);
    Boxeur boxeur_2("Box_2", 78);
    Boxeur boxeur_3("Box_3", 72);
    Boxeur boxeur_4("Box_4", 80);

    Combat demiFinale1("1/2 Finale 1");
    Combat demiFinale2("1/2 Finale 2");
    Combat finale("Finale");

    Combat competitions[3] = { demiFinale1, demiFinale2, finale };

    competitions[0].setCoinBleu(&boxeur_1);
    competitions[0].setCoinRouge(&boxeur_2);

    competitions[1].setCoinBleu(&boxeur_3);
    competitions[1].setCoinRouge(&boxeur_4);

    competitions[0].DesignerVainqueur("rouge");
    competitions[1].DesignerVainqueur("bleu");

    competitions[2].setCoinBleu(demiFinale1.getVainqueur());
    competitions[2].setCoinRouge(demiFinale2.getVainqueur());

    if (competitions[2].getCoinBleu() != nullptr && competitions[2].getCoinRouge() != nullptr) {
        competitions[2].DesignerVainqueur("bleu");
    }

    cout << "Vainqueur de la demi-finale 1 : " << competitions[0].getVainqueur()->getNom() << endl;
    cout << "Vainqueur de la demi-finale 2 : " << competitions[1].getVainqueur()->getNom() << endl;
    cout << "Vainqueur de la finale : " << competitions[2].getVainqueur()->getNom() << endl;

    AfficheResultats(competitions);

    return 0;
}
