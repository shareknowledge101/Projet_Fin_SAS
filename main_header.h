#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

#define MAX_CLIENT 1

int se_trouve;

struct client_data {
    
    int idClient;
    char nom[30];
    char prenom[30];
    char email[100];
    float sold;
};

struct produits_data {

    int idProduit, stock;
    float prix;
    char nom[50];
    char catego[50];
    char description[100];

};


struct catalog {
    struct produits_data carrion;
    struct produits_data asta;
    struct produits_data dahab;
    struct produits_data lavazza;
    struct produits_data nescafe;
};


void chercher_nom();
void chercher_categorie();
void cherecher_fct();
void tri();



void CP();
void AC();
void GPC();
void GSV();
void stat();
void EFF_ACH();
    

#endif