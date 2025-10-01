#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"




int main() {
    
    int choix;

    
    while(1){
        system("clear");
        printf("___________page [1]__________");
        printf("\n1. Gestion du profil client");
        printf("\n2. Gestion du solde virtuel");
        printf("\n3. Consultation des produits");
        printf("\n4. Effectuer un achat");
        printf("\n5. Mes statistiques");
        printf("\n0. Quitter l'application");
        printf("\n_____________________________");
        printf("\t\nEntrez votre Choix : ");
        scanf("%d", &choix);

        printf(">>>\nVous avez choisi l'option %d\n", choix);
        
        switch (choix) {
            case 0:
                printf("Au revoir!\n");
                return 0;
            case 1:
                AC();
                break;
            case 2:
                GSV();
                break;
            case 3:
                CP();
                break;
            case 4:
                EFF_ACH();
                break;
            case 5:
                stat();
                break;
            default:
                printf("Input incorrect!\n");
        }

    }
    return 0;
}