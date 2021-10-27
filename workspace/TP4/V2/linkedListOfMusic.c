#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_BUFFER_SIZE 256

// ============
// Definitions of external functions
// ============

// permet d'afficher une musique sous le format csv
void afficheElement(Element e) {
	Music *m = (Music *)e;
	printf("%s,",m->name);
	printf("%s,",m->artist);
	printf("%s,",m->album);
	printf("%s,",m->genre);
	printf("%i,",m->discNum);
	printf("%i,",m->trackNum);
	printf("%i\n",m->year);
}

//on free partout sauf sur les champs int
void detruireElement(Element e) {
   Music *m = (Music*)e;
   free(m->name);
   free(m->artist);
   free(m->album);
   free(m->genre);
   m->name = NULL;
   m->artist = NULL;
   m->album = NULL;
   m->genre= NULL;
   free(m);
   e = NULL;
}

// compare deux musiques sur tous les champs
bool equalsElement(Element e1, Element e2){
	Music *m1 = (Music *)e1;
	Music *m2 = (Music *)e2;
	if (strcmp(m1->name,m2->name) != 0)
		return 0;
	if (strcmp(m1->artist,m2->artist) != 0)
		return 0;
	if (strcmp(m1->album,m2->album) != 0)
		return 0;
	if (strcmp(m1->genre,m2->genre) != 0)
		return 0;
	if (m1->discNum != m2->discNum)
		return 0;
	if (m1->trackNum != m2->trackNum)
		return 0;
	if (m1->year != m2->year)
		return 0;
	return 1;
}

//afficher le fichier csv uniquement
void afficheCsv(char* fileName) {
	FILE* f = fopen(fileName,"r");
	char line[MAX_BUFFER_SIZE];
	while(fgets(line, MAX_BUFFER_SIZE, f) != NULL) {
		printf("%s",line);
	}
	fclose(f);
}

//créer une cellule de musique
Music* creerMusique(char *line) {
	Music *m = (Music *)calloc(1,sizeof(Music));
	char *copy = strdup(line);

	//on affecte tous les champs d'une musique au bon endroit
	m->name = strsep(&copy,",");
	m->artist = strsep(&copy,",");
	m->album = strsep(&copy,",");
	m->genre = strsep(&copy,",");
	m->discNum = atoi(strsep(&copy,","));
	m->trackNum = atoi(strsep(&copy,","));
	m->year = atoi(strsep(&copy,","));
	free(copy);
	return m;
}

//prise en compte de toutes les lignes du fichier csv
Liste creerMusiqueListe(char* fileName) {
	Liste listeMusique;
	Music *uneMusique;
	FILE* f = fopen(fileName,"r");
	char line[MAX_BUFFER_SIZE];
	while(fgets(line, MAX_BUFFER_SIZE, f) != NULL) {
		uneMusique = creerMusique(line);
		listeMusique = ajoutFin_i(uneMusique,listeMusique);
	}
	fclose(f);
	return listeMusique;
}
