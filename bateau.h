// bateau.h le module bateau d�finit les couleurs et type et autre info des bateaux
#ifndef _BATEAU_H
#define _BATEAU_H
#include "parametre.h"



typedef enum  {horizontal,  vertical} ESens;

typedef struct
{
    ESens mDirection;
    int mLatitude;
    char mLongitude; /* en fait position dans la grille de jeu du point en haut � gauche */
}   TPosition;


typedef struct
{
    TPosition mCoordonnees;
    int idInfoBateau;// unique, indice des mBateauxDuJoueur
    int touche[K_LONGMAXBAT]; //si toutes les cases sont a 0 alors bateau est coul�
}   TBateau;


int EstCoule(TBateau * pBateau, Tparam * pParam);
// D: retourn 1 si le bateau est coul� 0 si non
// E: pBateau:
// R: 1 ou 0

int GetTypeBateau(int pIndice, Tparam * pParam );
/* il faut faire �galemnt des fonctions pour les informations positionnelles direction latitude et logitude=> compl�ter*/
#endif
