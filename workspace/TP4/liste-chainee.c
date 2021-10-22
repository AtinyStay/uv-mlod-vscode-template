#include "liste-chainee.h"
#include <stdlib.h>
#include <stdio.h>

#define TODO NULL;

// retourne vrai si l est vide et faux sinon
bool estVide(Liste l) {
	return l == NULL;
}

// créer une liste d'un seul élément contenant la valeur v
// liste est un pointeur
Liste creer(Element v) {
    Liste liste = (Liste *)calloc(1,sizeof(Cellule));
    liste->val = v;
	return liste;
}

// ajoute l'élément v en tete de la liste l
Liste ajoutTete(Element v, Liste l) {
	Liste n = creer(v);
	n->suiv = l;
	return n;
}

void afficheElement(Element e) {
	printf("%i ",e);
}

// affiche tous les éléments de la liste l
// Attention, cette fonction doit être indépendante du type des éléments de la liste
// utiliser une fonction annexe affiche_element
// Attention la liste peut être vide !
// version itérative
void afficheListe_i(Liste l) {
	Liste p = l;
	while(!estVide(p)) {
		afficheElement(p->val);
		p=p->suiv;
	}
	printf("\n");
}

// version recursive
void afficheListe_r(Liste l) {
	if(!estVide(l)){
		afficheElement(l->val);
		afficheListe_r(l->suiv);
	}
}

void detruireElement(Element e, Liste l) {
	while(!estVide(l)) {
		Liste p = l->suiv;
		if(p->val == e) {
			p = p->suiv;
			free(p);
			l = p;
		}	
		l=l->suiv;
	}
}

// Détruit tous les éléments de la liste l
// version itérative
void detruire_i(Liste l) {
	Liste p = l;
	while(!estVide(p)) {
		free(p);
		p=p->suiv;
	};
}

// version récursive
void detruire_r(Liste l) {
	if(!estVide(l))
		free(l);
		detruire_r(l->suiv);
}

// retourne la liste dans laquelle l'élément v a été ajouté en fin
// version itérative
Liste ajoutFin_i(Element v, Liste l) {
	Liste fin = creer(v);
	while(!estVide(l)) {
		if(estVide(l->suiv)) {
			l->suiv = fin;
			return l;
		}			
		l = l->suiv; 
	}
	return fin;
}

// version recursive
Liste ajoutFin_r(Element v, Liste l) {
	if(!estVide(l->suiv))
		ajoutFin_r(v,l->suiv);
	else
		l->suiv = creer(v);
	return l;
}

// compare deux elements
bool equalsElement(Element e1, Element e2){
	return e1 == e2;
}

// Retourne un pointeur sur l'élément de la liste l contenant la valeur v ou NULL
// version itérative
Liste cherche_i(Element v,Liste l) {
	while(!estVide(l)) {
		if(equalsElement(v, l->val))
			return l;
		l=l->suiv;
	}
	return NULL;
}

// version récursive
Liste cherche_r(Element v,Liste l) {
	if(equalsElement(v, l->val))
		return l;
	if(l->suiv != NULL )
		return cherche_r(v, l->suiv);
	return NULL;
}

// Retourne la liste modifiée dans la laquelle le premier élément ayant la valeur v a été supprimé
// ne fait rien si aucun élément possède cette valeur
// version itérative
Liste retirePremier_i(Element v, Liste l) {
	return TODO;
}


// version recursive
Liste retirePremier_r(Element v, Liste l) {
	return TODO;
}


void afficheEnvers_r(Liste l) {
	TODO;
}



