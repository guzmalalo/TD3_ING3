// standard input output library
#include <stdio.h>

#define NB_NOTES 3

/**
 * @brief Exo 6
 * - Saisir trois notes sur 20 (ex : 13,4)  au clavier.
 * - Calculer la moyenne des notes en prenant soin de
 *  vérifier que chaque note soit bien comprise entre 0 et 20
 *  (une nouvelle note est demandée à l'utilisateur tant
 *  qu'elle n'est pas conforme
 *
 * @return int
 */
int main() {

    // declaration
    float note, moyenne;

    // initialisation
    moyenne = 0;

    // code
    for (int i = 1; i <= NB_NOTES; ++i) {
        do {
            printf("Rentrez la note # %d : ", i);
            scanf("%f", &note);
        } while (note < 0 || note > 20);
        moyenne += note;
    }

    // output
    printf("La moyenne est : %f", moyenne / NB_NOTES);

    // end program
    return 0;
}