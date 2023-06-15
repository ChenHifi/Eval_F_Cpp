using namespace std;
#include "Boxeur.h"
#include <iostream>
#include "Combat.h"

int main() {

    Boxeur boxeur_1("Box_1", 75);
    cout << "Adresse de boxeur_1 : " << &boxeur_1 << ", Nom : " << boxeur_1.getNom() << ", Poids : " << boxeur_1.getPoids() << endl;

    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    cout << "Adresse de boxeur_2 : " << &boxeur_2 << ", Nom : " << boxeur_2->getNom() << ", Poids : " << boxeur_2->getPoids() << endl;

    Combat combat_1("Comb_1_1/8");
    cout << "Adresse de combat_1 : " << &combat_1 << ", Niveau : " << combat_1.getNiveau() << endl;
    
    delete boxeur_2;

    return 0;
}
