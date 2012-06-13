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
