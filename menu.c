#include "menu.h"
#include "vuev1.h"
#include "parametre.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int afficherMenu (){

    system("cls");
    int choix;

    printf("\n ---------------------MENU PRINCIPAL : BATAILLE NAVALE ----------------------\n\n");
    printf("%d - Creer une nouvelle partie\n", KNEWGAME);
    printf("%d - Charger partie\n", KLOADGAME);
    printf("%d - Consulter les meilleurs scores\n", KHIGHSCORE);
    printf("%d - Afficher regles\n", KSHOWRULES);
    printf("%d - Quitter\n\n\n", KQUIT);

	printf ("  Votre choix --> ");
	fflush (stdin);
	scanf("%d",&choix);
	while (choix != KNEWGAME
			&& choix != KLOADGAME
			&& choix != KHIGHSCORE
			&& choix != KSHOWRULES
			&& choix != KQUIT)
	{
		printf  ("  Erreur de saisie, Votre choix --> ");
		fflush (stdin);
		scanf("%d",&choix);
	}

    return choix;
}

