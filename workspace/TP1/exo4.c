#include <stdio.h>
#include <stdlib.h>

typedef short TypeEntier;

TypeEntier factorielle(int N) {
    int produit = 1;
    for(int i=N; i>=1; i--) {
        produit *= i;
    }
    return produit;
}

void affichageFactorielle(void) {
    int N = 0;
    printf("Entrez un nombre entier : ");
    scanf("%d",&N);
    printf("%d! = %11d\n", N, factorielle(N));
}

int main(void){
    affichageFactorielle();    
}