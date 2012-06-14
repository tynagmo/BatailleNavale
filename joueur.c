#include "joueur.h"


Tjoueur saisieJoueur(Tjoueur pjoueur)
{
    printf("\t****SAISIE DU JOUEUR****\n\n");

    return pjoueur;

}



void setBateauJoueur(TBateau * pBat, Tparam * pParam, int indice)
{
    int i;
    TInfoBateau * InfBat;

    saisirInfoBateau(&InfBat);
    /* a faire dans une fonction */
        for (i=0;i<InfBat->mType;i++)
        {
            pBat->touche[i] = 1;
        }
    /**/

        pBat->idInfoBateau = indice;


        setIemeInfoBateauTParam(indice, pParam,InfBat->mNom, InfBat->mCouleur , InfBat->mType);
}
