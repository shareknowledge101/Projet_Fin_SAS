#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"




extern struct client_data client;

void GSV(){
 
    int choix;
    float montant;


    system("clear");
    printf("\n________Gestion du Solde Virtuel________\n");

    printf("Votre Solde actuel : %.2fMAD\n", client.sold);

    printf("\nles options\n");
    printf("1. Afficher le montant actuel\n");
    printf("2. Alimenter le solde\n");
    printf("0. Retour au menu\n");
    printf("Votre choix: ");
    scanf("%d", &choix);
    

    switch(choix){
        case 0:
            break;
        case 1:
            system("clear");
            printf("\n________Votre Solde Actuel________\n");
            printf("Solde: %.2f MAD\n", client.sold);
            printf("_____________________________\n");
            printf("\nAppuyez sur Entree pour continuer...");
            getchar(); getchar();
            GSV();
            break;
        case 2:
            system("clear");
            printf("\n________Alimentation du Solde________\n");
            printf("Solde actuel: %.2f MAD\n", client.sold);
            printf("Montant à ajouter: ");
            scanf("%f", &montant);


            if(montant > 0){
                client.sold = client.sold + montant;
                printf("\nVotre depot effectue avec success\n");
                printf("Votre Nouveau solde est : [%.2f]MAD\n", client.sold);
            }
            else{
                printf("Echec!, le montant doit etre positive");
            }
            printf("\nAppuyez sur Entree pour continuer...");
            getchar(); getchar();
            GSV();
            break;

        default:
            printf("Choix incorrect!\n");
            getchar(); getchar();
            GSV();

    }

}