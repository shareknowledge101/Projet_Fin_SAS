#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include "main_header.h"







void to_lowercase(char stri[]) {
    int i = 0;
    while (stri[i] != '\0') {
        stri[i] = tolower(stri[i]);
        i++;
    }
}

//extern int client_exist;
//extern struct client_data client;


void AC() {
    
    if (client_exist){
        system("clear");
        printf("\n________Votre Profil________\n");
        printf("ID: %d\n", client.idClient);
        printf("Nom: %s\n", client.nom);
        printf("Prenom: %s\n", client.prenom);
        printf("Email: %s\n", client.email);
        printf("Solde: %.2f MAD\n", client.sold);

        printf("\nOptions:\n");
        printf("1. Modifier le profil\n");
        printf("2. Retour au menu\n");
        printf("Votre choix: ");
        
    
        }
        
    
    

    client.idClient = rand();
    system("clear");
    printf("\n________L'ajout de client________");
    printf("\n_________________________________");
    printf("\nEntrez votre nom : ");
    scanf("%29s", client.nom);
    printf("\nEntrez votre prenom : ");
    scanf("%29s", client.prenom);


    to_lowercase(client.nom);
    to_lowercase(client.prenom);


    printf("\nVotre Solde Actual est 0.00MAD");
    printf("\nEntrez votre solde : ");
    scanf("%f", &client.sold);


    printf("\n_____________________________");
    printf("\n>>>Votre ID : %d\n>>>Votre nom : %s\n>>>Votre prenom : %s", client.idClient, client.nom, client.prenom);
    sprintf(client.email, "%s.%s@gmail.com", client.nom, client.prenom);
    printf("\n>>>Votre Email est : %s", client.email);
    printf("\n>>>Votre Solde : %.2fMAD", client.sold);
    printf("\n_____________________________\n");
    client_exist = 1;
    printf("\nAppuyez sur Entree pour acceder au menu principal...");
    getchar();getchar();
    
}



