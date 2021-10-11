//
// Created by Amine on 11/10/2021.
//
#include "structure.h"
#ifndef TP5_FONCTION_H
#define TP5_FONCTION_H
#define NOMBRE_MAX_POINT 100


/*Procédure pour appeler saisirnombrerationnel*/
/* IN : Rien  */
/* OUT : Retourne un nombre relatif */
nombreRationnel saisirNombreRationnel();

/*Procédure pour appeler affichernombrerationnel*/
/* IN : Un nombre rationnel  */
/* OUT : Retourne un nombre rationnel */
nombreRationnel afficherNombreRationnel(nombreRationnel quotient);

/*Procédure pour appeler multiplication*/
/* IN : 2 nombres relationnel  */
/* OUT : Retourne un nombre rationnel */
nombreRationnel multiplication(nombreRationnel quotient1,nombreRationnel quotient2);

/*Procédure pour appeler somme*/
/* IN : 2 nombres relationnel  */
/* OUT : Retourne un nombre rationnel */
nombreRationnel somme(nombreRationnel quotient1,nombreRationnel quotient2);

/* Procédure qui initialise 100 points d'un tableau à 1 dimension*/
/* IN : Un tableau 1D de points à valeurs aléatoires*/
/*  OUT : Un tableau 1D de points à valeurs entières nulles*/
void initialisationTab1D(pointTableau1D tab1D[NOMBRE_MAX_POINT]);

/* Procédure qui permet d'appeler saisirpoint1D*/
/*IN : Un tableau 1D de points à valeurs quelconque*/
/*OUT : Un tableau 1D de points avec les valeurs entières saisies*/
pointTableau1D saisirPoint1D();


/* Procédure qui initialise les valeurs d'un tableau 3*4 à 2 dimension.*/
/* IN : Un tableau 3*4 de points à valeurs aléatoires.*/
/* OUT : Un tableau 3*4 de points à valeurs entières nulles.*/
void initialisationTab2D (pointTableau2D tab2D[3][4]);


#endif //TP5_FONCTION_H
