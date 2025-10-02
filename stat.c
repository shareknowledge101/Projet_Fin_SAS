#include <stdio.h>
#include <stdlib.h>
#include "main_header.h"
//extern struct client_data client;





/*char last_changed_name[60] = "Aucun changement";
float total_deposits = 0;
float total_spent = 0;
int products_bought = 0;*/

void stat(){
    system("clear");
    printf("\n________Mes Statistiques________\n");
    


    printf("\n1. Dernier changement de nom:\n");
    printf("   %s\n", last_changed_name);
    


    printf("\n2. Produits achetes:\n");
    printf("   Nombre total: %d produits\n", products_bought);
    
    printf("\n3. Statistiques financières:\n");
    printf("   Solde initial: 0.00 MAD\n");
    printf("   Total depose: %.2f MAD\n", total_deposits);
    printf("   Total depense: %.2f MAD\n", total_spent);
    printf("   Solde actuel: %.2f MAD\n", client.sold);
    
    printf("\n________________________________\n");
    printf("Appuyez sur Entree pour continuer...");
    getchar();getchar();
}