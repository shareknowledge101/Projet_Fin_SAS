#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"

extern struct client_data client;


/*void to_lowercase(char stri[]) {
    int i = 0;
    while (stri[i] != '\0') {
        stri[i] = tolower(stri[i]);
        i++;
    }
}*/


void GPC() {
        
    int choix;
    
    system("clear");
    printf("\n________Gestion de Profil Client________\n");
    printf("ID: %d\n", client.idClient);
    printf("Nom: %s\n", client.nom);
    printf("Prenom: %s\n", client.prenom);
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
            printf("Nouveau prenom: ");
            scanf("%29s", client.prenom);



            to_lowercase(client.nom);
            to_lowercase(client.prenom);



            sprintf(client.email, "%s.%s@gmail.com", client.nom, client.prenom);
            printf("Nouveau solde: ");
            scanf("%f", &client.sold);
            printf("Profil modifie avec succès!\n");
            break;
        case 2:


        printf("\nAppuyez sur Entree pour continuer...");
            getchar(); getchar();
            GPC();
            break;
        default:
            printf("Choix incorrect!\n");
            getchar(); getchar();
            GPC();
    }
    
    printf("\nAppuyez sur Entree pour continuer...");
}