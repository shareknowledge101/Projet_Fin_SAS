#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"


void AC() {
    
    struct client_data client;

    system("clear");
    printf("\n________L'ajout de client________");
    printf("\n_________________________________");
    printf("\nEntrez votre nom : ");
    scanf("%29s", client.nom);
    printf("\nEntrez votre prenom : ");
    scanf("%29s", client.prenom);
    printf("\nVotre Solde Actual est 0.00MAD");
    printf("\nEntrez votre solde : ");
    scanf("%f", &client.sold);
    printf("\n_____________________________");
    printf("\n>>>Votre nom : %s\n>>>Votre prenom : %s", client.nom, client.prenom);
    printf("\n>>>Votre Email est : %s.%s@gmail.com", client.nom, client.prenom);
    printf("\n>>>Votre Solde : %.2fMAD", client.sold);
    printf("\n_____________________________\n");
    getchar();getchar();
    
}



