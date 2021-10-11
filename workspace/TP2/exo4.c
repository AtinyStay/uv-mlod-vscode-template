#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum Mois {
    janv = 1,
    fev,
    mars,
    avr,
    mai,
    juin,
    juil,
    aout,
    sept,
    oct,
    nov,
    dec
};

struct Date { //3 cases en mémoire pour la structure date
    int jour;
    int annee;
    enum Mois mois;
};

typedef enum Mois mois;
typedef struct Date date;

void initialiseDate(date *d) {
    printf("Jour : ");
    scanf("%i", &d->jour);
    printf("Mois : ");
    scanf("%i", (int *)&d->mois);
    printf("Année : ");
    scanf("%i", &d->annee);
}

void afficheDate(date *d) {
    char *Mois;


}

date* newDate() {
    date* pDate = (date*)malloc(sizeof(date));
    if (pDate)
        initialiseDate(pDate);
    return pDate;
}



date creerDateParCopie() {
    date d;
    printf("Jour : ");
    scanf("%i", &d->jour);
    printf("Mois : ");
    scanf("%i", (int *)&d->mois);
    printf("Année : ");
    scanf("%i", &d->annee);
    return d;
}

int main(void) {
    Date d;
    initialiseDate(&d); //Prend une adresse en paramètre pour modifier la date directement
    afficheDate(&d);
    d = creerDateParCopie();
    afficheDate(%d);
}