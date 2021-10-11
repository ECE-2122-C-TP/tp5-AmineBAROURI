
#include <stdio.h>

int main()
{
    int choixExercice = 0;
    printf("Quel exercice choisissez-vous ? le 1, le 2 ou le 3.\n");
    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default :
            {
                printf("ERREUR :Quel exercice choisissez-vous ? le 1, le 2 ou le 3. :\n");
                break;
            }
        }
    }
    while (choixExercice != 0);
    return 0;
}

