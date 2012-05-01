#ifndef _CONIOCOULEUR_H
#define _CONIOCOULEUR_H

#ifdef __cplusplus
extern "C" {
#endif

/* 	Type des couleurs disponibles :
	Utilis� par textcolor
*/
typedef enum COLORS {
    /*  dark colors     */
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    /*  light colors    */
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
} COLORS;

/** Coordonn�es �cran
Les coordonn�es �cran sont "num�rot�es" :
	- en colonnes (les "x") : de 1 � 80, en partant de la gauche
	- en lignes (les "y") : de 1 � 25, en partant d'en haut de l'�cran
Exemple :

 | ---------------- x -------->
 |      000000000111        778
 |      123456789012   ...  890
 |  1   abcdefghijklm       ppp
 |  2   abcdefghijklm       ppp
 y  3   abcdefghijklm       ppp
 |  ... abcdefghijklm       ppp
 |  23  abcdefghijklm       ppp
 |  24  abcdefghijklm       ppp
\/  25  abcdefghijklm       ppp

**/
/**
	N : clrscr
	D : Effacement de l'�cran (�quivaut � system("cls"))
	E : -
	S : -
	R : -
	P : -
**/
void clrscr(void);                                                                  /* done */

/**
	N : gotoxy
	D : Positonnement du curseur � l'�cran en (x, y) pour affichage ult�rieur
	E : x, y
	S : -
	R : -
	P : 1 <= x <=80 et 1 <= y <= 25
**/
void gotoxy(int x, int y);                                                      /* done */

/**
	N : textcolor
	D : Positionne la couleur du premier plan (texte) (premier plan/foreground)
		� _color pour affichage ult�rieur
	E : _color (une valeur de COLORS)
	S : -
	R : -
	P : Ne fonctionne pas si on est sur la ligne 25 et que l'on fait un retour � la ligne.
		Pour que la couleur indiqu�e prenne effet lors des affichages :
		- soit il faut que le curseur soit entre les lignes 1 et 24,
		- soit le curseur est ligne 25 et on ne fait pas de retour � la ligne ("\n" ou remplissage de la ligne).
		Dans le cas contraire, la couleur de foreground est la couleur usuelle (blanc).
		Solution :
			- utiliser clrscr
			- utiliser gotoxy
**/
void textcolor(int _color);                                                     /* done */

#define cprintf printf                                                          /* done */
#define cscanf scanf                                                            /* done */


#ifdef __cplusplus
}
#endif

#endif
