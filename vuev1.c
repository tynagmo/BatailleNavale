#include "vuev1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// pour les couleurs

//***************************
/*	N : afficherCouleur
	D :  affiche le nom de la couleur d'index i
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherCouleur(int pI)
{
    char nom[KCOULEURS_LGNOMCOUL+1];
    getNom (getCouleurFromNum ( pI), nom);
    printf("Couleur : %s\t", nom);
}


// pour les types

//***************************
/*	N : afficherType
	D :  affiche le nom de la type de bateau d'index i
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherType(int pI)
{
    switch(pI)
    {
        case remorqueur: printf("remorqueur\t");break;
        case porteAvion: printf("porteAvion\t");break;
        case sousMarin: printf("sousMarin\t");break;
        case cargot: printf("cargot\t");break;
        default:break;
    }
}
// Pour le bateau
//***************************
/*	N : afficherInfoBateau
	D :  affiche les  Informations sur à l'info bateau pB
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherInfoBateau(const TInfoBateau *pB)
{
    afficherCouleur(pB->mCouleur);
    afficherType(pB->mType );
    printf("Nom : %s\n",pB->mNom);
}


//***************************
/*	N : afficherBateau
	D :  affiche les  Informations sur un bateau pB
	E : pB, pParam
	S :
	R :  -
	Prec : -


*/
void afficherBateau(const TBateau *pB,const Tparam * pParam)
{
    afficherInfoBateau(getInfoBateau(pB->idInfoBateau, pParam));


    //COMPLETER
}


//***************************
/*	N : afficherParam
	D :  affiche les  param
	E : param
	S :
	R :  -
	Prec : -
*/


void afficherParam(const Tparam * pParam)
{
    int i;
    int nb = K_NBTYPEBATEAUX*getNBInstances (pParam);
    printf("Nombre d'instances %d\n", pParam->mNombreInstanceBateaux);

    for (i=0;i<nb;i++) afficherInfoBateau (&(pParam->mBateauxDuJoueur[i]));

    for (i=0;i<nb;i++) afficherInfoBateau (&(pParam->mBateauxMachine [i]));

}

//***************************
/*	N : saisirInfoBateau
	D : ...
	E :
	S : ...
	R :  -
	Prec : -
*/
//fini le 14/06
void saisirInfoBateau(TInfoBateau * pB)
{

    int mCouleur; /*indice dans la table des couleurs*/
     EType mType;
     char mNom[K_LGNOM];

    printf("---------------------Saisie d'informations du Bateau---------------------\n");
    mCouleur=saisirCouleurBateau(); //saisie couleur
    mType=saisirTypeBateau(); // saisie type
    printf("Saisissez le nom du bateau (%d caracteres maximum\n", K_LGNOM);
    scanf("%s", &pB.mNom);




}
//créer 02/05
int saisirCouleurBateau()
{
    int numCouleur;
    do{
    printf("Saisissez votre couleur : \n");
    printf("Tapez 0 pour BLACK\n");
    printf("Tapez 1 pour BLUE\n");
    printf("Tapez 2 pour GREEN\n");
    printf("Tapez 3 pour CYAN\n");
    printf("Tapez 4 pour RED\n");
    printf("Tapez 5 pour MAGENTA\n");
    printf("Tapez 6 pour BROWN\n");
    printf("Tapez 7 pour LIGHTGRAY\n");
    printf("Tapez 8 pour DARKGRAY\n");
    printf("Tapez 9 pour LIGHTBLUE\n");
    printf("Tapez 10 pour LIGHTGREEN\n");
    printf("Tapez 11 pour LIGHTCYAN\n");
    printf("Tapez 12 pour LIGHTRED\n");
    printf("Tapez 13 pour LIGHTMAGENTA\n");
    printf("Tapez 14 pour YELLOW\n");
    printf("Tapez 15 pour WHITE\n");
    scanf("%d",&numCouleur);
    }while (numCouleur<0 || numCouleur >15);

    return(numCouleur);
}

//crée 02/05 finie le 9/5
int saisirTypeBateau(){

    int typeBateau;
    do{
        printf("Saisissez votre type bateau\n");
        printf("Tapez 0 pour remorqueur (taille du bateau : 2 cases)\n ");
        printf("Tapez 1 pour porte Avion (taille du bateau : 5 cases\n");
        printf("Tapez 2 pour sous marin (taille du bateau : 4 cases\n");
        printf("Tapez 3 pour cargot (taille du bateau : 3 cases\n");
        scanf("%d",&typeBateau);
    }while (typeBateau<0 || typeBateau>3);
    return (typeBateau);
}






