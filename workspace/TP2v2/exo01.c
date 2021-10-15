#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void echangeContenu(int *a, int *b) {
    int c = *b;
    *b = *a;
    *a = c;
}

int main(void) {
    int a = 10;
    int b = 20;
    printf("a = %d b = %d\n",a,b);
    echangeContenu(&a,&b);
    printf("a = %d b = %d\n",a,b);
    return EXIT_SUCCESS;
}