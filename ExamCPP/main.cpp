//
//  main.cpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include <iostream>

#include "Combat.hpp"

using namespace Boxe;

void AfficheResultats(Combat combats[], size_t size)
{
    for (size_t i = 0; i < size; i++) {
        Combat& combat = combats[i];
        std::cout << "\nCombat : " << combat.GetNiveau() << "\nCoin bleu : " << combat.GetCoinBleu()->GetNom() << "\nCoin rouge : " << combat.GetCoinRouge()->GetNom() << "\nVainqueur : " << combat.GetVainqueur()->GetNom() << std::endl;
    }
}

int main(int argc, const char * argv[]) {

    // Init Boxeur
    Boxeur boxeur_1 = Boxeur("Box_1", 75);
    std::cout << "Adresse : " << &boxeur_1 << " Nom : " << boxeur_1.GetNom() << " Poids : " << boxeur_1.GetPoids() << std::endl;
    
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    std::cout << "Adresse : " << boxeur_2 << " Nom : " << boxeur_2->GetNom() << " Poids : " << boxeur_2->GetPoids() << std::endl;
    
    // Init combat
    Combat combat_1 = Combat("Comb_1_1/8");
    std::cout << "Adresse : " << &combat_1 << " Nom : " << combat_1.GetNiveau() << std::endl;
    
    // App
    combat_1.SetCoinBleu(&boxeur_1);
    combat_1.SetCoinRouge(boxeur_2);
    
    // Competition
    Combat combats[3] = {
        Combat("Comb_1_1/2"),
        Combat("Comb_2_1/2"),
        Combat("Comb_3_1/1")
    };
    
    Boxeur boxeur_3 = Boxeur("Box_3", 76.5);
    Boxeur boxeur_4 = Boxeur("Box_4", 77.3);
    
    combats[0].SetCoinBleu(&boxeur_1);
    combats[0].SetCoinRouge(boxeur_2);
    
    combats[1].SetCoinBleu(&boxeur_3);
    combats[1].SetCoinRouge(&boxeur_4);
    
    combats[0].DesignerVainqueur("bleu");
    combats[1].DesignerVainqueur("rouge");
    
    combats[2].SetCoinBleu(combats[0].GetVainqueur());
    combats[2].SetCoinRouge(combats[1].GetVainqueur());
    
    combats[2].DesignerVainqueur("bleu");
    
    AfficheResultats(combats, 3);
    
    // Deinit
    delete boxeur_2;
    
    return 0;
}
