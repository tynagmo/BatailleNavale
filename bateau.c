#include "bateau.h"
#include "parametre.h"
/*
typedef enum type {horizontal,  vertical} ESens;

typedef struct
{
    ESens mDirection;
    int mLatitude;
    char mLongitude;
}   TPosition;


typedef struct
{
     int mCouleur; //indice dans la table des couleurs
     EType mType;
     char mNom[K_LGNOM];
     int touche[K_LONGMAXBAT]; //si toutes les cases sont a 0 alors bateau est coulé
     int coule;
}     TInfoBateau;

typedef struct
{
    TPosition mCoordonnees;
    TInfoBateau mPieceIdentite;
}   TBateau;

il faut faire égalemnt des fonctions pour les informations positionnelles direction latitude et logitude=> compléter
*/

int EstCoule(const TBateau pBateau)
{
    int i,nbTouche,j;

    nbTouche=0;
    j=0;

    for(i=0;i< pBateau.Infobateau.mType;i++)
    {
        if(pBateau.Infobateau.touche[j]==0)
        {
            j++;
            nbTouche++;
        }
    }

    if(nbTouche==pBateau.Infobateau.mType)
        return 1;
}
