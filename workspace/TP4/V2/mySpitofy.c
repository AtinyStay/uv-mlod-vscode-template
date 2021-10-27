// gcc -W -Wall -std=c99 linkedList.c linkedListOfString.c -o linkedListOfString

// valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all --show-reachable=no ./linkedListOfString

#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#define MAX_BUFFER_SIZE 256

// ============
// main
// ============

int main(void){
	afficheCsv("music.csv");
	Liste liste;
	liste = creerMusiqueListe("music.csv");


	
		
		
			

	

	
	


	detruire_i(liste);


	return EXIT_SUCCESS;
}