#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"


void tri() {

    int tri_method;


    printf("Comment voulez-vous trier ?\n");
    printf("1) Par Prix\n");
    printf("2) Par Nom Alphabetique\n");
    printf("0) Retour\n");
    printf(">>>Entrez votre choix : ");
    scanf("%d", &tri_method);

    while(1){
        
        switch (tri_method) {
            case 0:
                printf("Au revoir!\n");
                return 0;
            case 1:
                //tri par prix max a min
            case 2:
                //tri par Nom jusqua A a Z
            default:
                printf("Incorrect choix!");

        }
    }
}


void CP() {

    int choisir;
    system("clear");
    printf("\n________Consultation des produits________");

    struct produits_data products[5] = {
        {101, 50, 35.50, "Carrion Classic", "Arabica 250g", "Smooth Arabica beans with chocolate notes"},
        {102, 75, 29.99, "Asta Espresso", "Robusta 250g", "Strong Italian-style espresso blend"},
        {103, 25, 49.50, "Dahab Gold", "Premium Blend 500g", "Premium Ethiopian single-origin beans"},
        {104, 100, 70.50, "Lavazza Qualità", "Italian Blend 125g", "Well-balanced medium roast Italian coffee"},
        {105, 80, 30.25, "Nescafé Classic", "Instant Coffee 170g", "Soluble instant coffee for quick preparation"}
    };


    printf("\n_____________catalogue des coffes________________\n");
    for(int i = 0; i < 5; i++) {
        printf("ID: %d | %s | %s | $%.2fMAD | Stock: %d\n\n   Description: %s\n_________________\n", products[i].idProduit, products[i].nom, products[i].catego, products[i].prix, products[i].stock, products[i].description);
        
    }

    printf("Comment voulez-vous trier ?\n");
    printf("1) Afficher catalogue\n");
    printf("2) Rechercher produits\n");
    printf("3) Tri des produits\n");
    printf("0) Retour\n");

    switch (choisir) {
        case 0:
        int main();
        case 1:
            printf("\n_____________la list des profuits________________\n");
            for(int i = 0; i < 5; i++) {
                printf("ID: %d | %s | $%.2fMAD | Stock: %d\n", products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
        
            }
        //afficher list de produit avec prix et stock
        case 2:
            printf("Comment voulez-vous trier ?\n");
            printf("1) Par ID\n");
            printf("2) Par date d'entree\n");
            printf("3) Par statut\n");
        //recherecher par nom alphabetique out category
        case 3:
            tri();
        //par prix par interval ex. 10-50 doit afficher les prix disponible dans ce interval
    }
    //getchar();getchar();
}