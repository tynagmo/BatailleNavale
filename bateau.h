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
    int idInfoBateau;
    TInfoBateau Infobateau;

}   TBateau;

/* il faut faire �galemnt des fonctions pour les informations positionnelles direction latitude et logitude=> compl�ter*/
#endif
