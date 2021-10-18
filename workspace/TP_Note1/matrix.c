#include <stdio.h>
#include <stdlib.h>

int scanLineAsInt() {
	int buf;
	scanf("%i\n",&buf);
	return buf;
}

struct Matrix {
    int nbLignes;
    int nbColonnes;
    int *tab[][];
};

typedef struct Matrix matrix;

struct MatrixArray {
    int nbMatrices;
};

typedef struct MatrixArray matrixArray;

void readMatrix(matrix Matrice) {
    matrix *pMatrice = (matrix *)calloc(1, sizeof(matrix));
    scanf("%i\t%i", &Matrice.nbLignes, &Matrice.nbColonnes);
    for(int i=0; i<Matrice.nbLignes; i++) {
        for(int j=0; j<Matrice.nbColonnes; j++) {
            (*pMatrice)[i][j] = scanf("%i\t",Matrice.tab[i][j]);
        }
        
    }
    scanf("%i",Matrice[i][j]);
}

void readMatrixArray(matrixArray MatriceArray) {
    matrixArray *pMatriceArray = (matrixArray *)calloc(MatriceArray.nbMatrices, sizeof(matrix));



}

void afficheMatrix(matrix Matrice) {
    for(int i=0; i<Matrice.nbLignes; i++) {
        for(int j=0; j<Matrice.nbColonnes; j++) {
            printf("%d \t",);
        }
        printf("\n");
    }
}

void affichageFinal(matrixArray MatriceArray) {
    printf("%i\n",MatriceArray.nbMatrices);
    for(int i=0; i<MatriceArray.nbMatrices; i++) {
        afficheMatrix();
    } 
}











int main(void) {
    matrix Matrice;
    matrixArray MatriceArray;
    readMatrix
    readMatrixArray
    afficheMatrix
    afficheMatrixArray
    free(Matrix)
    
    return 0;
}