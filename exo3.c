#include <stdio.h>

/**
 * @brief Saisir un entier au clavier
 * Indiquer dans la console si cet entier est un multiple de 3
 * et s'il est supérieur ou égal à 10.
 *
 * @return int
 */
int main(){

    // declaration & initialisation
    int n = 0;
    const int trois = 3;

    // assignation
    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    // code
    printf("%d multiple de 3 ? : %s \n", n , n%trois == 0 ? "Oui": "Non");
    printf("%d > 10 ? : %s \n", n ,n > 10 ? "Oui": "Non");

    // Try
    //trois  = 4;

    // end program
    return 0;
}