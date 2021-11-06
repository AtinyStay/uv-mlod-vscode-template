#include "arbre-bin-recherche.h"
#include <stdlib.h>
#include <stdbool.h>

// retourne TRUE si a est l'arbre vide et FALSE sinon
bool estVide(ArbreBinaire a) {
	return a == NULL;
}

// initialise l'arbre a à l'arbre vide
void initialiser(ArbreBinaire* a) {
	*a = NULL;
}

// créer un arbre contenant un seul noeud ayant la valeur e
ArbreBinaire creer(Element e) {
	ArbreBinaire arbre = malloc(sizeof(Noeud));
	arbre->val = e;
	arbre->filsGauche = NULL;
	arbre->filsDroit = NULL;
	return arbre;
}

// insere e dans a sachant que a est un arbre binaire de recherche
// si a contient déjà un element e, ce dernier n'est pas insérer afin d'éviter les doublons
// version itérative

ArbreBinaire insere_i(ArbreBinaire a, Element e) {
	if(estVide(a)) {
		return creer(e);
	}
	
	if(a->val == e)
		return a;

	// (a != NULL) && (a->val !=e)
	ArbreBinaire t = a;
	while(true) {
		if(t->val > e) {
			if(!estVide(t->filsGauche))
				t = t->filsGauche;
			else
				t->filsGauche = creer(e);
		}
		if(t->val < e) {
			if(!estVide(t->filsDroit))
				t = t->filsDroit;
			else
				t->filsDroit = creer(e);
		}
		if(t->val == e)
			return a;
	}
}


// insere e dans a sachant que a est un arbre binaire de recherche
// si a contient déjà un element e, ce dernier n'est pas insérer afin d'éviter les doublons
// version récursive
ArbreBinaire insere_r(ArbreBinaire a, Element e) {
	if(estVide(a)) {
		return creer(e);
	}

	if(a->val == e)
		return a;
	
	if(a->val > e)
		a->filsGauche = insere_r(a->filsGauche,e);
	if(a->val < e)
		a->filsDroit = insere_r(a->filsDroit,e);
	return a;
}

// retourne le nombre de noeud contenus dans l'arbre a
int nombreDeNoeud(ArbreBinaire a){
	int nbNoeuds = 0;
	if(estVide(a))
		return nbNoeuds;
	nbNoeuds = 1 + nombreDeNoeud(a->filsGauche) + nombreDeNoeud(a->filsDroit);
	return nbNoeuds;
}


// retourne la profondeur du noeud ayant la valeur e dans a
// retourne -1 si a est vide ou si e n'est pas dans a
int profondeur(ArbreBinaire a, Element e){
	int profondeur = 0;
	if(estVide(a))
		return -1;
	if(a->val > e)
		a->filsGauche = insere_r(a->filsGauche,e);
	if(a->val < e)
		a->filsDroit = insere_r(a->filsDroit,e);
	
}

// retourne la hauteur de l'arbre a
int hauteur(ArbreBinaire a){
	return 0;
}

// retourne le pere de elem dans l'arbre a ou NULL s'il n'existe pas
ArbreBinaire pere(ArbreBinaire a, Element elem){

	return NULL;
}


void afficheRGD_r(ArbreBinaire a){
	if(!estVide(a)) {
		printf("%i ",a->val);
		afficheRGD_r(a->filsGauche);
		afficheRGD_r(a->filsDroit);
	}
}

void afficheGRD_r(ArbreBinaire a){
	if(!estVide(a)) {
		afficheGRD_r(a->filsGauche);
		printf("%i ",a->val);
		afficheGRD_r(a->filsDroit);
	}	
}

void afficheGDR_r(ArbreBinaire a){
	if(!estVide(a)) {
		afficheGDR_r(a->filsGauche);
		afficheGDR_r(a->filsDroit);
		printf("%i ",a->val);
	}
}

// retourne le noeud dont la valeur est minimum dans l'arbre
// Suppose que a est un arbre binaire de recherche sans doublons
ArbreBinaire min(ArbreBinaire a){
	return NULL;
}

// retourne le noeud dont la valeur est maximum dans l'arbre
// Suppose que a est un arbre binaire de recherche sans doublons
ArbreBinaire max(ArbreBinaire a){
	return NULL;
}


// retourne l'arbre dont la valeur de la racine est elem et NULL si elem n'existe dans a 
// version récursive
ArbreBinaire recherche_r(ArbreBinaire a, Element elem){

	return NULL;
}


// suppime x de a
ArbreBinaire supprimer_r(ArbreBinaire a,Element x)
{

	return NULL;
}

void detruire_r(ArbreBinaire a){

}

