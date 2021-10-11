//
// Created by Amine on 11/10/2021.
//
#include "fonction.h"
#include "structure.h"
#include <stdio.h>
#define NOMBRE_MAX_POINT 100

nombreRationnel saisirNombreRationnel()
{
    nombreRationnel quotient;
    printf("Entrez svp votre numérateur :\n");
    scanf("%d", &quotient.numerateur);
    printf("Entrez svp votre dénominateur :\n");
    scanf("%d", &quotient.denominateur);
    return quotient;
}

nombreRationnel afficherNombreRationnel(nombreRationnel quotient)
{
    printf(" Votre nombre rationnel est :\n %d/%d=%f ", quotient.numerateur, quotient.denominateur, (float)quotient.numerateur/ (float) quotient.denominateur);
}

nombreRationnel multiplication(nombreRationnel quotient1,nombreRationnel quotient2)
{

    nombreRationnel produitQuotient;
    produitQuotient.numerateur = quotient1.numerateur*quotient2.numerateur;
    produitQuotient.denominateur = quotient1.denominateur*quotient2.denominateur;

    return produitQuotient;
}

nombreRationnel somme(nombreRationnel quotient1,nombreRationnel quotient2)
{
    nombreRationnel sommeQuotient;
    sommeQuotient.numerateur = (quotient1.numerateur * quotient2.denominateur) + (quotient2.numerateur * quotient1.denominateur);
    sommeQuotient.denominateur = quotient1.denominateur * quotient1.denominateur;

    return sommeQuotient;
}

pointTableau1D saisirPoint1D()
{
    pointTableau1D point;
    printf("Veuillez saisir un entier svp :\n");
    scanf("%d", &point.x);
    return point;
}

void initialisationTab1D(pointTableau1D tab1D[NOMBRE_MAX_POINT])
{
    for (int i = 0; i < NOMBRE_MAX_POINT; i=i+1)
    {
        tab1D[i].x = 0;
    }
    return;
}



void initialisationTab2D(pointTableau2D tab2D[3][4])
{
    for (int i = 0; i < 3; i=i+1)
    {
        for (int j = 0; j < 4;j=j+1)
        {
            tab2D[i][j].x = 0;
        }
    }
    return;
}