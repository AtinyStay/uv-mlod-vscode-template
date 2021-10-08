#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estConvexe(bool tab[], int length) {
    int compteurDiff = 0;
    for(int i=0; i<=length; i++) {
        if(tab[i] != tab[i+1])
            compteurDiff++;
    }
    return (compteurDiff<=2);
}

int main(void) {
    bool tab1[5] = {false, true, true, false, false};
    bool tab2[5] = {true, true, false, false, true};
    bool tab3[5] = {true, true, false, true, false};
    printf("tab1 %s \n", tab1);
    printf(estConvexe(tab1,5));
}