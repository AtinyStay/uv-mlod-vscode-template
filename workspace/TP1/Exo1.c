#include <stdio.h>
#include <stdlib.h>

float calculprix(float prix_plein_tarif, int age_fils) {
    if(0<= age_fils <=2)
        return 0.1*prix_plein_tarif;
    if(2< age_fils <=12)
        return 0.5*prix_plein_tarif;
    return prix_plein_tarif;
}

int main(void) {
    float prix_plein_tarif = 15.0;
    unsigned int age = 4;
    float prixTTC = calculprix(prix_plein_tarif,age);
    printf("prix = %.2f€\n",prix_plein_tarif);
    return EXIT_SUCCESS;  
}


