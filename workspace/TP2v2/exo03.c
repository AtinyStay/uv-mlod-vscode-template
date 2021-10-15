#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void mult_matrice(int64_t matriceResultat[5][5], int64_t matrice1[5][5], int64_t matrice2[5][5]) {
    for(uint8_t i=0; i<5; i++) {
        for(uint8_t j=0; j<5; j++) {
            for(uint8_t k=0; k<5; k++) {
                matriceResultat[i][j] += matrice1[i][k]*matrice2[k][j];
            }
        }
    }
}

void affiche_matrice(int64_t matriceAafficher[5][5]) {
    for(uint8_t i=0; i<5; i++) {
        printf("\n");
        for(uint8_t j=0; j<5; j++) {
            printf("%li \t",matriceAafficher[i][j]);
        }
    }
}

int main(void) {
//matrices en ligne * colonne
    int64_t matrice1[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int64_t matrice2[5][5]={{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10}};
    int64_t matriceResultat[5][5];
    mult_matrice(matriceResultat,matrice1,matrice2);
    affiche_matrice(matriceResultat);
    return EXIT_SUCCESS;
}