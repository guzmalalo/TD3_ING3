// standard input output library
#include <stdio.h>

/**
 * @brief Saisir la largeur et la longueur d'un 
 * rectangle au clavier. Afficher le périmètre
 * et l'aire de ce rectangle dans la console
 *
 * @return int
 */
int main() {

    // declaration
    float largeur, longueur, aire, perimetre;

    // initialisation
    largeur = longueur = 0;
    aire = perimetre = 0.0f;

    // user values
    printf("Saisissez la largeur : ");
    scanf("%f", &largeur);

    printf("Saisissez la longueur : ");
    scanf(" %f", &longueur);

    // code
    aire = largeur * longueur;
    perimetre = 2 * (largeur + longueur);

    // ouput
    printf("Aire : %f \n", aire);
    printf("Perimetre : %f \n", perimetre);

    return 0;
}