# include <stdio.h>
# include <stdlib.h>

#include "vuev1.h"
#include "testVue.h"


/*********************************************************************************/
/*** utiliser la fonction testerVue pour tester les fonctions du module vuev1, ***/
/*** les autres fonction n'étant que des sous parties de cette fonction        ***/
/*********************************************************************************/

int choixMenu(void)
{
    int choix;

    while (choix != 0)
    {
        system("cls");
        printf ("\n");

        printf ("                    +------------------------+\n");
        printf ("                    |   TEST FONCTIONS VUE   |\n");
        printf ("                    +------------------------+\n");
        printf ("    %d - tester afficherCouleur \n", KtestAffC);
        printf ("    %d - tester afficherType \n", KtestAffT);
        printf ("    %d - tester afficherInfoBateau \n", KtestAffInfoBat);
        printf ("    %d - tester afficherBateau \n", KtestAffBat);
        printf ("    %d - tester afficherParam \n", KtestAffParam);
        printf ("    %d - tester saisirInfoBateau \n", KtestSaisirInfoBat);
        printf ("    %d - tester saisirAfficherGrille \n", KtestAffGrill);
        printf ("    %d - tester afficherCaractereDansGrille \n", KtestAffCarGrill);
        printf ("    %d - Quitter\n\n\n", KQuitter);

        printf ("  Votre choix --> ");
        fflush (stdin);
        scanf("%d",&choix);
        while (choix != KtestAffC
                && choix != KtestAffT
                && choix != KtestAffInfoBat
                && choix != KtestAffBat
                && choix != KtestAffParam
                && choix != KtestSaisirInfoBat
                && choix != KtestAffGrill
                && choix != KtestAffCarGrill
                && choix != KQuitter)
        {
            printf  ("  Erreur de saisie, Votre choix --> ");
            fflush (stdin);
            scanf("%d",&choix);
        }

        return choix;
    }
}
