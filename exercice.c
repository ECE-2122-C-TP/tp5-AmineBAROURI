//
// Created by Amine on 11/10/2021.
//

#include "fonction.h"
#include <stdio.h>


void exercice1()
{
    nombreRationnel quotient = saisirNombreRationnel();
    afficherNombreRationnel(quotient);
    nombreRationnel sommeQuotient = somme(quotient , quotient);
    nombreRationnel produitQuotient = multiplication(quotient , quotient);
    printf("La somme du nombre rationel  %d/%d\n ", sommeQuotient.numerateur, sommeQuotient.denominateur);
    printf("La produit du nombre rationel  %d/%d \n", produitQuotient.numerateur, produitQuotient.denominateur);
}

void exercice2()
{
    pointTableau1D point[NOMBRE_MAX_POINT];
    initialisationTab1D(point);
    int pointTotal = 0;
    int i = 0;
    printf("Combien de points voulez-vous donner ?\n");
    scanf("%d", &pointTotal);
    if(pointTotal > NOMBRE_MAX_POINT)
    {
        printf("ERREUR : Il y a trop de points limité vous à 100 points\n");
    }
    else if (pointTotal <= 0)
    {
        printf(" ERREUR : Le nombre de point ne peut pas être négatif.\n");
    }
    else
    {
        for (i = 0 ; i<pointTotal ; i++)
        {
            point[i] = saisirPoint1D();
        }
    }
    int max = point[0].x;
    for (i = 0 ; i<pointTotal ; i++)
    {
        if (point[i].x >= max)
        {
            max = point[i].x ;
        }
    }

    printf(" Le plus grand entier de votre tableau est : %d\n", max);

    return;
}

void exercice3()
{
    int compteur = 0;
    pointTableau1D tableauInitial[3][4];
    pointTableau1D tableauFinal[12]= {0};
    void initialisationTab2D (pointTableau1D tableauInitial[3][4]);
    for ( int i = 0 ; i < 3; i=i=1)
    {
        for ( int j = 0 ; j < 4 ; j=j=1)
        {
            tableauInitial[i][j] = saisirPoint1D();

        }
    }
    for ( int i = 0 ; i < 3; i=i=1)
    {
        for ( int j = 0 ; j < 4 ; j=j+1)
        {
            tableauFinal[compteur].x=tableauInitial[i][j].x;
            compteur+=1;
        }
    }
    printf("Tableau initial :\n");
    for ( int i = 0 ; i < 3; i ++)
    {
        for ( int j = 0 ; j < 4 ; j++)
        {
            printf("%d\t", tableauInitial[i][j].x);
        }
        printf("\n");
    }
    printf("Tableau final :\n");
    for (int i = 0 ; i<12 ; i=i+1)
    {
        printf("%d\t", tableauFinal[i].x);
    }
    return;
}