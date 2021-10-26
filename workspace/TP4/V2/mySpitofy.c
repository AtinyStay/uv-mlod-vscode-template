// gcc -W -Wall -std=c99 linkedList.c linkedListOfString.c -o linkedListOfString

// valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all --show-reachable=no ./linkedListOfString

#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#define MAX_BUFFER_SIZE 256


// ============
// Definitions of external functions
// ============

/*
void afficheElement(Element e) {
	printf("%s ",(char*)e);
}

void detruireElement(Element e) {}

// compare deux elements
bool equalsElement(Element e1, Element e2){
	return strcmp((char *)e1,(char *)e2)==0;
}

*/

// ============
// main
// ============

int main(void){

	char *copy;
	char *champMusic;

	//Lecture du fichier music.csv en récupérant les éléments de chaque ligne délimités par la virgule
	FILE* f = fopen("music.csv","r");
	char line[MAX_BUFFER_SIZE];
	//boucle sur toutes les lignes du fichier
	while(fgets(line, MAX_BUFFER_SIZE, f) != NULL) {
		copy = strdup(line);
		//boucle sur une ligne de fichier pour récupérer ce qu'il y a entre chaque virgule
		while((champMusic = strsep(&copy,",")) != NULL) {
			printf("%s\n",champMusic);
		}
	}
		
		
			

	

	
	
	
/*
	l = ajoutTete("!",l);
	l = ajoutTete("!",l);
	l = ajoutTete("!",l);
	l = ajoutTete("Jedi",l);
	l = ajoutTete("est",l);
	l = ajoutTete("un",l);
	l = ajoutTete("Luke",l);
*/

/*
	afficheListe_i(l);

	detruire_r(l);
*/
	fclose(f);
	return EXIT_SUCCESS;
}