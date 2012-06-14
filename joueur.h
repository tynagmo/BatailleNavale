
#ifndef _JOUEUR_H
#define _JOUEUR_H
#define K_MAX_NOM 20
#define K_MAX_PRENOM 20
#include "bateau.h"
#include "parametre.h"
typedef struct Tjoueur
{
    char Nom[K_MAX_NOM];
    char Prenom[K_MAX_PRENOM];
    int score;
}Tjoueur;


//***************************
/*	N : saisiJoueur
	D : permet de saisire les information du joueur non CPU
	E :
	S :pjoueur
	R :
    Prec : -
*/
Tjoueur saisieJoueur(Tjoueur pjoueur);


void setBateauJoueur(TBateau * pBat, Tparam * pParam, int indice);

#endif
