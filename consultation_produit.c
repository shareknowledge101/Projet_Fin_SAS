#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main_header.h"






void chercher_nom(){
    char recherch[50];
    int i, exist = 0;
    int choix;

    while(1){
        system("clear");
        printf("\n________Recherche par Nom________\n");
        printf("1. Rechercher un produit\n");
        printf("0. Retour\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        
        if(choix == 0) {
            cherecher_fct();
            return;
        }
        
        printf("Entrez le nom de produit : ");
        scanf("%s", recherch);

        struct produits_data products[5] = {
            {101, 50, 35.50, "carrion", "Arabica", "Smooth Arabica beans with chocolate notes"},
            {102, 75, 29.99, "asta", "Robusta", "Strong Italian-style espresso blend"},
            {103, 25, 49.50, "dahab", "Arabica", "Premium Ethiopian single-origin beans"},
            {104, 100, 70.50, "lavazza", "Italien", "Well-balanced medium roast Italian coffee"},
            {105, 80, 30.25, "nescafe", "Instant", "Soluble instant coffee for quick preparation"}
        };

        printf("\nResultat pour : %s\n", recherch);
        printf("__________________________\n");

        exist = 0;
        for (i = 0; i < 5; i++) {
            if(strcmp(products[i].nom, recherch) == 0){
                printf("PRODUIT TROUVE!\n");
                printf("ID: %d\n", products[i].idProduit);
                printf("Nom: %s\n", products[i].nom);
                printf("Categorie: %s\n", products[i].catego);
                printf("Prix: %.2f MAD\n", products[i].prix);
                printf("Stock: %d\n", products[i].stock);
                printf("Description: %s\n", products[i].description);
                exist = 1;
                break;
            }
        }

        if (exist == 0){
            printf("\nProduit non trouver!\n");
        }

        printf("\nAppuyez sur Entree pour continuer...");
        getchar(); getchar();
    }
}

void chercher_categorie(){
    char categorie[50];
    int i, found = 0;
    
    system("clear");
    printf("\n________Recherche par Categorie________\n");
    

    printf("Entrez la categorie: ");
    scanf("%s", categorie);
    

    
    struct produits_data products[5] = {
        {101, 50, 35.50, "carrion", "Arabica", "Smooth Arabica beans with chocolate notes"},
        {102, 75, 29.99, "asta", "Robusta", "Strong Italian-style espresso blend"},
        {103, 25, 49.50, "dahab", "Arabica", "Premium Ethiopian single-origin beans"},
        {104, 100, 70.50, "lavazza", "Italien", "Well-balanced medium roast Italian coffee"},
        {105, 80, 30.25, "nescafe", "Instant", "Soluble instant coffee for quick preparation"}};
    
    printf("\nResultats pour la categorie: %s\n", categorie);
    printf("________________________________\n");
    
    for(i = 0; i < 5; i++){
        if(strcmp(products[i].catego, categorie) == 0){
            printf("ID: %d | %s | %.2f MAD | Stock: %d\n", 
                   products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
            found = 1;
        }
    }
    
    
    
    if(!found) {
        printf("Aucun produit trouve dans cette categorie!\n");
    }
    
    printf("\nAppuyez sur Entree pour continuer...");
    getchar();getchar();
}

void cherecher_fct(){
    int cherecher_method;
    
    printf("Comment voulez-vous chercher ?\n");
    printf("1) Par nom\n");
    printf("2) Par categorie\n");
    printf("0) Retour\n");
    printf(">>>Entrez votre choix : ");
    scanf("%d", &cherecher_method);
    switch (cherecher_method) {
        case 0:
            CP();
            break;
        case 1:
            chercher_nom();
            getchar(); getchar();
            CP();
            break;
        case 2:
            chercher_categorie();
            getchar(); getchar();
            CP();
            break;
        default:
            printf("Input incorrect!\n");
            getchar(); getchar();
            cherecher_fct();
    }
}



void tri_par_prix(){




    system("clear");
    printf("\n________Tri par Prix________\n");
    


    struct produits_data products[5] = {
        {101, 50, 35.50, "carrion", "Arabica 250g", "Smooth Arabica beans with chocolate notes"},
        {102, 75, 29.99, "asta", "Robusta 250g", "Strong Italian-style espresso blend"},
        {103, 25, 49.50, "dahab", "Premium Blend 500g", "Premium Ethiopian single-origin beans"},
        {104, 100, 70.50, "lavazza", "Italian Blend 125g", "Well-balanced medium roast Italian coffee"},
        {105, 80, 30.25, "nescafe", "Instant Coffee 170g", "Soluble instant coffee for quick preparation"}
    };
    



    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i; j++) {
            if(products[j].prix > products[j+1].prix) {

                struct produits_data temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
    
    printf("\nProduits tries par prix (croissant):\n");
    for(int i = 0; i < 5; i++) {
        printf("ID: %d | %s | %.2f MAD | Stock: %d\n", 
               products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
    }
    
    printf("\nAppuyez sur Entree pour continuer...");
    getchar(); getchar();
}




void tri_par_nom() {
    system("clear");
    printf("\n________Tri par Nom________\n");
    
    struct produits_data products[5] = {
        {101, 50, 35.50, "carrion", "Arabica 250g", "Smooth Arabica beans with chocolate notes"},
        {102, 75, 29.99, "asta", "Robusta 250g", "Strong Italian-style espresso blend"},
        {103, 25, 49.50, "dahab", "Premium Blend 500g", "Premium Ethiopian single-origin beans"},
        {104, 100, 70.50, "lavazza", "Italian Blend 125g", "Well-balanced medium roast Italian coffee"},
        {105, 80, 30.25, "nescafe", "Instant Coffee 170g", "Soluble instant coffee for quick preparation"}};
    



    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i; j++) {
            if(strcmp(products[j].nom, products[j+1].nom) > 0) {



                struct produits_data temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
    
    printf("\nProduits tries par nom (alphabetique):\n");
    for(int i = 0; i < 5; i++){
        printf("ID: %d | %s | %.2f MAD | Stock: %d\n", 
               products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
    }
    
    printf("\nAppuyez sur Entree pour continuer...");
    getchar(); getchar();
}



void tri() {
    int tri_method;

    printf("\n________Tri des Produits________\n");
    printf("Comment voulez-vous trier ?\n");
    printf("1) Par Prix (croissant)\n");
    printf("2) Par Nom (alphabetique)\n");
    printf("0) Retour\n");
    printf(">>>Entrez votre choix : ");
    scanf("%d", &tri_method);

    switch (tri_method) {
        case 0:
            CP();
            break;
        case 1:
            tri_par_prix();
            tri();
            break;
        case 2:
            tri_par_nom();
            tri();
            break;
        default:
            printf("Choix incorrect!\n");
            getchar(); getchar();
            tri();
    }
}

void CP() {


    int choisir;

    system("clear");
    printf("\n________Consultation des produits________\n");



    struct produits_data products[5] = {
        {101, 50, 35.50, "carrion", "Arabica 250g", "Smooth Arabica beans with chocolate notes"},
        {102, 75, 29.99, "asta", "Robusta 250g", "Strong Italian-style espresso blend"},
        {103, 25, 49.50, "dahab", "Premium Blend 500g", "Premium Ethiopian single-origin beans"},
        {104, 100, 70.50, "lavazza", "Italian Blend 125g", "Well-balanced medium roast Italian coffee"},
        {105, 80, 30.25, "nescafe", "Instant Coffee 170g", "Soluble instant coffee for quick preparation"}};

    printf("\n_____________catalogue des coffes________________\n");



    
    for(int i = 0; i < 5; i++) {
        printf("ID: %d | %s | %s | %.2fMAD | Stock: %d\n", products[i].idProduit, products[i].nom, products[i].catego, products[i].prix, products[i].stock);
        printf("Description: %s\n", products[i].description);
        printf("_________________\n");
    }

    printf("\n Comment voulez-vous procceder ?\n");
    printf("1) Afficher catalogue simplifier\n");
    printf("2) Rechercher produits\n");
    printf("3) Tri des produits\n");
    printf("0) Retour\n");
    printf(">>>Entrez votre choix : ");
    scanf("%d", &choisir);

    switch (choisir) {
        case 0:
            break;
        case 1:
            system("clear");
            printf("\n_____________liste simplifie des produits________________\n");
            
            for(int i = 0; i < 5; i++) {
                printf("ID: %d | %s | %.2fMAD | Stock: %d\n", products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
            }

            printf("\nAppuyez sur Entree pour continuer..");

            getchar(); getchar();
            CP();
            break;
        case 2:
            cherecher_fct();
            break;
        case 3:
            tri();
            break;
        default:
            printf("Choix incorrect!\n");
            getchar(); getchar();
            CP();
    }
}