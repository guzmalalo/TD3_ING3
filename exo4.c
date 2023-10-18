// standard input output library
#include <stdio.h>

#define TARIF_ENFANT 4.0f
#define TARIF_REDUITE 6.0f
#define TARIF_PLEINE 9.0f

int main() {

    // declaration & initialisation
    int age = 0;
    char etudiant = 'N';
    float tarif = 0.0f;

    // Assignation : user values
    printf("Saisissez votre age  : ");
    scanf(" %d", &age);

    printf("Etes vous étudiant (O/N) : ");
    scanf(" %c", &etudiant);

    // code
    if (age < 12) {
        tarif = TARIF_ENFANT;
    } else if (age < 17 || (etudiant == 'O' && age < 27)) {
        tarif = TARIF_REDUITE;
    } else if (age >= 65) {
        tarif = TARIF_REDUITE;
    } else {
        tarif = TARIF_PLEINE;
    }

    // output
    printf("Votre tarif es : %f \n", tarif);

    // end program
    return 0;
}