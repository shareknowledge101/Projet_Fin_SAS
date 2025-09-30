#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H


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
    struct produits_data carrion[5];
    struct produits_data asta[5];
    struct produits_data dahab[5];
    struct produits_data lavazza[5];
    struct produits_data nescafe[5];
};



void AC();
void GPC();
void GSV();
void CP();
void stat();
void EFF_ACH();
    

#endif