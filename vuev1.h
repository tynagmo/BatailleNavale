
#include "bateau.h"
#include "parametre.h"

// pour les couleurs

//***************************
/*	N : afficherCouleur
	D :  affiche le nom de la couleur d'index i
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherCouleur(int pI);


// pour les types

//***************************
/*	N : afficherType
	D :  affiche le nom de la type de bateau d'index i
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherType(int pI);
// Pour le bateau
//***************************
/*	N : afficherInfoBateau
	D :  affiche les  Informations sur � l'info bateau pB
	E : pB
	S :
	R :  -
	Prec : -


*/
void afficherInfoBateau(const TInfoBateau *pB);


//***************************
/*	N : afficherBateau
	D :  affiche les  Informations sur un bateau pB
	E : pB, pParam
	S :
	R :  -
	Prec : -


*/
void afficherBateau(const TBateau *pB,const Tparam * pParam);


//***************************
/*	N : afficherParam
	D :  affiche les  param
	E : param
	S :
	R :  -
	Prec : -
*/

void afficherParam(const Tparam * pParam);

//***************************
/*	N : saisirInfoBateau
	D : ...
	E :
	S : ...
	R :  -
	Prec : -
*/

void saisirInfoBateau(TInfoBateau pB);





//a changer
//***************************
/*	N : afficherGrille
	D : affiche une grille de taille (pnbLignes*pnbColonnes) de couleur pCouleur � partir d'un point haut gauche en px,py
	E : px, int py, int pnbLignes, int pnbColonnes, COLORS pCouleur
	S : ...
	R :  -
	Prec : -fenetre initialis�e
*/
void afficherGrille(int px, int py, int pnbLignes, int pnbColonnes, COLORS pCouleur);
//int afficherGrille();

//***************************
/*	N : afficherCaractereDansGrille
	D : afficherCaractereDansGrille dans la grille en position (ppositionXGrille,ppositionYGrille)
	 le caractere pcaractere de couleur pcouleurCaractere avec un arri�re plan pcouleurFond en ligne colonne (pligna, pcolonne
	E : tout
	S : ...
	R :  -
	Prec : -fenetre initialis�e, gille a au moins pligne et pcolonne dans la grille
*/


void afficherCaractereDansGrille(COLORS pcouleurCaractere,COLORS pcouleurFond,char pcaractere,int  ppositionXGrille,int ppositionYGrille,int pligne,int pcolonne);





/*	N : saisirCouleurBateau (02/05)
	D : permet de saisir la couleur d'un bateau
	E :
	S : ...
	R :  le code couleur du bateau
	Prec :
*/
int saisirCouleurBateau();



/*	N : saisirTypeBateau (02/05)
	D : permet de saisir le type d'un bateau (remorqeur ....)
	E :
	S : ...
	R :  le code type du bateau
	Prec :
*/
int saisirTypeBateau();
