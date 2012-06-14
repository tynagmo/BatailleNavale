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

int EstCoule(TBateau * pBateau, Tparam * pParam)
{
    int i,nbTouche,j;

    nbTouche=0;
    j=0;

    for(i=0;i< GetTypeBateau(pBateau->idInfoBateau, pParam);i++)
    {
        if(pBateau->touche[j]==0)
        {
            j++;
            nbTouche++;
        }
    }

    if(nbTouche==GetTypeBateau(pBateau->idInfoBateau, pParam))
        return 1;
}


int GetTypeBateau(int pIndice, Tparam * pParam )
{
    if(pIndice<getNBInstances(pParam))
    {
        return (pParam->mBateauxDuJoueur[pIndice].mType);
    }else
    {
        return (pParam->mBateauxMachine[pIndice].mType);
    }

}

