#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"

void GPC() {
    void GPC() {
        
    int choix;
    
    system("clear");
    printf("\n________Gestion de Profil Client________\n");
    printf("ID: %d\n", client.idClient);
    printf("Nom: %s\n", client.nom);
    printf("Prénom: %s\n", client.prenom);
    printf("Email: %s\n", client.email);
    printf("Solde: %.2f MAD\n", client.sold);
    
    printf("\nOptions:\n");
    printf("1. Modifier le profil\n");
    printf("2. Afficher les informations\n");
    printf("0. Retour au menu\n");
    printf("Votre choix: ");
    scanf("%d", &choix);
    
    switch(choix) {
        case 0:
            break;
        case 1:
            printf("\nModification du profil:\n");
            printf("Nouveau nom: ");
            scanf("%29s", client.nom);
            printf("Nouveau prénom: ");
            scanf("%29s", client.prenom);


            sprintf(client.email, "%s.%s@gmail.com", client.nom, client.prenom);
            printf("Nouveau solde: ");
            scanf("%f", &client.sold);
            printf("Profil modifié avec succès!\n");
            break;
        case 2:


        printf("\nAppuyez sur Entrée pour continuer...");
            getchar(); getchar();
            GPC();
            break;
        default:
            printf("Choix incorrect!\n");
            getchar(); getchar();
            GPC();
    }
    
    printf("\nAppuyez sur Entrée pour continuer...");
    getchar(); getchar();
}
}

void GSV() {
    system("clear");
    printf("Gestion du solde virtuel - Function not yet implemented\n");
    printf("Appuyez sur Entrée pour continuer...");
    getchar();getchar();
}

void stat() {
    system("clear");
    printf("Statistiques - Function not yet implemented\n");
    printf("Appuyez sur Entrée pour continuer...");
    getchar();getchar();
}

void EFF_ACH() {
    system("clear");
    printf("Effectuer un achat - Function not yet implemented\n");
    printf("Appuyez sur Entrée pour continuer...");
    getchar();getchar();
}