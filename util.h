#ifndef _UTIL_H
#define _UTIL_H
#include <time.h>
#include <stdlib.h>


#include <stdio.h>

#include <conio.h>


#include <unistd.h>
#include <windows.h>
#include "lietrec.h"
#include "coniocouleur.h"

//initialisation de la source du g�n�rateur automatique de valeurs al�atoires avec l'heure

void initRandom(void);

//cr�ation d'une fen�tre en mode console avec le titre du jeu
int initConsoleJeu();

#endif
