#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


float calculPrix(float prix_plein_tarif, int age) {
    if(age>12)
        return prix_plein_tarif;
    if(age<=2)
        return 0.1*prix_plein_tarif;
    return 0.5*prix_plein_tarif;
}

int main(void) {
    float prix_plein_tarif = 14.0;
    int age = 2;
    printf("Le prix du billet est de ");
    float prix = calculPrix(prix_plein_tarif, age);
    printf("%f euros \n", prix);
    return EXIT_SUCCESS;
}