#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estConvexe(bool tab[],int length)  {
	int nbChangement = 0;
	for(int i=1; nbChangement<=2 && i<length ; i++)
		if( tab[i-1] != tab[i] )
			nbChangement++;
	return nbChangement<=2;
}

void affichageConvexe(bool tab[], int length) {
    if(estConvexe(tab, length)) {
        printf("Le tableau est convexe \n");
    }
    else {
        printf("Le tableau n'est pas convexe \n");
    }   
}

int main(void) {
    bool tab1[] = {false,true,true,false,false};
    bool tab2[] = {true,true,false,false,true};
    bool tab3[] = {true,true,false,true,false};
    affichageConvexe(tab1, 5);
    affichageConvexe(tab2, 5);
    affichageConvexe(tab3, 5);  
}