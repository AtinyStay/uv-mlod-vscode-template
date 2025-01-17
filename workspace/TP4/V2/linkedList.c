#include "linkedList.h"
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
    Liste liste = malloc(sizeof(Cellule));
    liste->val = v;
	liste->suiv = NULL;
	return liste;
}

// ajoute l'élément v en tete de la liste l
Liste ajoutTete(Element v, Liste l) {
	Liste n = creer(v);
	n->suiv = l;
	return n;
}


// affiche tous les éléments de la liste l
// Attention, cette fonction doit être indépendante du type des éléments de la liste
// utiliser une fonction annexe affiche_element
// Attention la liste peut être vide !
// version itérative
void afficheListe_i(Liste l) {
	while(!estVide(l)) {
		afficheElement(l->val);
		l=l->suiv;
	}
	printf("\n");
}

// version recursive
void afficheListe_r(Liste l) {
	if(!estVide(l)){
		afficheElement(l->val);
		afficheListe_r(l->suiv);
	} else
	printf("\n"); 
}


// Détruit tous les éléments de la liste l
// version itérative
void detruire_i(Liste l) {
	Liste temp;
	while(!estVide(l)) {
		temp = l;
		l = l->suiv;
		detruireElement(temp->val);
		free(temp);
	}
}

// version récursive
void detruire_r(Liste l) {
	if(!estVide(l)) {
		detruire_r(l->suiv);
		detruireElement(l->val);
		free(l);
	}	
}

// retourne la liste dans laquelle l'élément v a été ajouté en fin
// version itérative
Liste ajoutFin_i(Element v, Liste l) {
	Liste fin = creer(v);
	if(estVide(l)) 
		return fin;
	while(!estVide(l->suiv)) {			
		l = l->suiv; 
	}
	// l->suiv == NULL
	l->suiv = fin; 
	return l;
}

// version recursive
Liste ajoutFin_r(Element v, Liste l) {
	if(!estVide(l->suiv))
		ajoutFin_r(v,l->suiv);
	else
		l->suiv = creer(v);
	return l;
}

// Retourne un pointeur sur l'élément de la liste l contenant la valeur v ou NULL
// version itérative
Liste cherche_i(Element v,Liste l) {
	while(!estVide(l) && !equalsElement(v, l->val)) {
		l=l->suiv;
	}
	// not(A && B) = not(A) || not(B)
	// l == NULL || l->val == v
	return l;
}

// version récursive
Liste cherche_r(Element v,Liste l) {
	if(estVide(l))
		return l;
	if(equalsElement(v, l->val))
		return l;
	else
		return cherche_r(v, l->suiv);
}

// Retourne la liste modifiée dans la laquelle le premier élément ayant la valeur v a été supprimé
// ne fait rien si aucun élément possède cette valeur
// version itérative
Liste retirePremier_i(Element v, Liste l) {
	Liste p, precedent;
	if(estVide(l)) // cas où la liste est vide
		return l;

	if(equalsElement(l->val, v)) {
		p = l->suiv;
		l->suiv = NULL; //pcq liste chainée
		detruire_r(l);
		return p;
	} // cas où la valeur qu'on cherche est dans la première cellule
			
	//pour les autres cas
	precedent = l;
	p = l->suiv;
	while(!estVide(p) && !equalsElement(p->val, v)) {
		precedent = p;
		p = p->suiv;
	}

	if(!estVide(p)) {
		//on a trouvé v
		precedent->suiv = p->suiv;
		p->suiv = NULL;
		detruire_r(p);
	}
	return l;
}


// version recursive
Liste retirePremier_r(Element v, Liste l) {
	if(estVide(l)) 
		return l;

	if(equalsElement(l->val, v)) {
		Liste p = l->suiv;
		l->suiv = NULL; //pcq liste chainée
		detruire_r(l);
		return p;
	}

	l->suiv = retirePremier_r(v, l->suiv);
	return l;
		
}


void afficheEnvers_r(Liste l) {
	while(!estVide(l)) {
		l = l->suiv;
		afficheEnvers_r(l);
		afficheElement(l->val);
	}
}



