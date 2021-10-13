#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void calculCombi (int N) {
    if((N<3) || (N>18))
        printf("Choisissez un entier N compris entre 3 et 18 svp \n");
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=6; j++) {
            for(int k=1; k<=6; k++) {
                if(i+j+k==N)
                    printf("%d%d%d \n",i,j,k);
            }
        }
    }
}


int main(void) {
    int N = 4;
    calculCombi(N);
    return EXIT_SUCCESS;
}