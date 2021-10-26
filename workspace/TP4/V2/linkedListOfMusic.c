#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

void detruireElement(Element e) {
	free(e);
}

// compare deux musiques
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
