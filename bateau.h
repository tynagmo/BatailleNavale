// bateau.h le module bateau définit les couleurs et type et autre info des bateaux
#ifndef _BATEAU_H
#define _BATEAU_H
#include "parametre.h"



typedef enum  {horizontal,  vertical} ESens;

typedef struct
{
    ESens mDirection;
    int mLatitude;
    char mLongitude; /* en fait position dans la grille de jeu du point en haut à gauche */
}   TPosition;


typedef struct
{
    TPosition mCoordonnees;
    int idInfoBateau;// unique, indice des mBateauxDuJoueur
    int touche[K_LONGMAXBAT]; //si toutes les cases sont a 0 alors bateau est coulé
}   TBateau;


int EstCoule(TBateau * pBateau, Tparam * pParam);
// D: retourn 1 si le bateau est coulé 0 si non
// E: pBateau:
// R: 1 ou 0

int GetTypeBateau(int pIndice, Tparam * pParam );
/* il faut faire égalemnt des fonctions pour les informations positionnelles direction latitude et logitude=> compléter*/
#endif
