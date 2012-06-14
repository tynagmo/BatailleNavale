#include <stdio.h>
#include <stdlib.h>

#include "joueur.h"


Tjoueur saisieJoueur(Tjoueur pjoueur)
{
    system("cls");
    printf("\t****SAISIE DU JOUEUR****\n\n");

    printf("Saisissez votre nom :");
    fflush(stdout);
    scanf("%s",pjoueur.Nom);
    fflush(stdin);
    printf("Saisissez votre prenom :");
    fflush(stdout);
    scanf("%s",pjoueur.Prenom);
    fflush(stdin);

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
