// standard input output library
#include <stdio.h>

/**
 * @brief Dans une école primaire, le/la directeur.rice doit connaître
 * le nombre total d'élèves.Pour cela, il/elle saisit le nombre de classes
 * ouvertes, puis ensuite, pour chacune des classes créées, son nombre d'élèves.
 * Le programme affichera à la fin le nombre total d'élèves dans l'école.
 *
 * @return int
 */
int main()
{
    // Declaration
    int nbClasses, nbElevesT, nbElevesC;

    // Initialisation
    nbElevesT = 0;

    printf("Saisissez le nombre de classes  : ");
    scanf(" %d", &nbClasses);

    for (int i = 0; i < nbClasses; ++i) {
        printf("Saisissez le nombre d'élevés de classes  %d : ", i+1);
        scanf(" %d", &nbElevesC);

        // Cumul
        nbElevesT += nbElevesC;
    }

    // output
    printf("Le nombre total d'élèves est : %d",nbElevesT);

    return 0;
};
