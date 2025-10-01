#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main_header.h"


extern float total_spent;
extern int products_bought;



void EFF_ACH(){
    int id_produit, quantite, i, produit_trouve = 0;
    
    system("clear");
    printf("\n________Effectuer un Achat________\n");
    
    struct produits_data products[5] = {
        {101, 50, 35.50, "Carrion Classic", "Arabica", "Smooth Arabica beans"},
        {102, 75, 29.99, "Asta Espresso", "Robusta", "Strong Italian-style espresso"},
        {103, 25, 49.50, "Dahab Gold", "Arabica", "Premium Ethiopian beans"},
        {104, 100, 70.50, "Lavazza Qualita", "Italien", "Medium roast Italian coffee"},
        {105, 80, 30.25, "Nescafe Classic", "Instant", "Soluble instant coffee"}
    };
    
    printf("\n________Catalogue Disponible________\n");
    for(i = 0; i < 5; i++) {
        printf("ID: %d | %s | %.2f MAD | Stock: %d\n", 
               products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
            
    }
    
    printf("\nEntrez l'ID du produit que vous voulez acheter: ");
    scanf("%d", &id_produit);
    
    printf("Entrez la quantite que vous acheter: ");
    scanf("%d", &quantite);
    


    for(i = 0; i < 5; i++) {
        if(products[i].idProduit == id_produit) {
            produit_trouve = 1;
            
            float prix_total = products[i].prix * quantite;
            
            printf("\nProduit selectionne: %s\n", products[i].nom);
            printf("Prix unitaire: %.2f MAD\n", products[i].prix);
            printf("Quantite: %d\n", quantite);
            printf("Prix total: %.2f MAD\n", prix_total);
            printf("Stock disponible: %d\n", products[i].stock);
            printf("Votre solde: %.2f MAD\n", client.sold);

            if(products[i].stock < quantite) {
                printf("\nTransaction non valide: Stock insuffisant!\n");
                printf("Stock disponible: %d, Quantite demandee: %d\n", products[i].stock, quantite);
                break;
            }

            if(client.sold >= prix_total) {
                client.sold = client.sold - prix_total;
                products[i].stock = products[i].stock - quantite;
                



                total_spent = total_spent + prix_total;

                products_bought = products_bought + quantite;
                
                printf("\nAchat effectue avec succès!\n");
                printf("Montant debite: %.2f MAD\n", prix_total);
                printf("Nouveau solde: %.2f MAD\n", client.sold);
                printf("Nouveau stock: %d\n", products[i].stock);
                printf("Merci pour votre achat!\n");
            } else {
                printf("\nTransaction NON VALIDE!: Solde insuffisant!\n");
                printf("Il vous manque: %.2f MAD\n", prix_total - client.sold);
            }
            break;
        }
    }
    
    if(!produit_trouve) {
        printf("\nProduit n'existe pas!\n");
    }
    
    printf("\nAppuyez sur Entree pour continuer...");
    getchar(); getchar();
}