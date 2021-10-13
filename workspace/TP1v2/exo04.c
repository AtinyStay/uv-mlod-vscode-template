#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned long long TypeEntier;

TypeEntier factorielle(TypeEntier n) {
    TypeEntier res = 1;
    for(int i=n; i>1; i--) {
        res *= i;
    }
    return res;
}

void afficheFactorielle(TypeEntier n) {
    TypeEntier res;
    for(int i=1; i<n; i++) {
        res = factorielle(i);
        printf("la factorielle de %d est : %lld \n", i, res);
    }
}

int main(void) {
    TypeEntier N = 15;
    afficheFactorielle(N);
}