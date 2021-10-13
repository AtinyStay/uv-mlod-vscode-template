#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Nécessité de créer deux fonctions, une pour vérifier qu'un nombre est parfait et une pour répertorier les nombres parfaits de 0 à N

bool estParfait(int N) {
    int sommeDiv = 0;
    for(int i=1; i<N; i++) {
        if((N%i) == 0)
            sommeDiv += i;
    }
    if(sommeDiv == N) {
        return true;
    }
    return false;
}

void afficheParfaits(int N) {
    for(int i=0; i<=N; i++) {
        if(estParfait(i)==true)
            printf("%d \n",i);
    }
}

int main(void) {
    int N = 500;
    printf("Les nombres parfaits compris entre 0 et %d sont :\n", N);
    afficheParfaits(N);
    return EXIT_SUCCESS;
}