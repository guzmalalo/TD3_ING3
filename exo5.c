#include <stdio.h>

int main() {

    // declaration & initialisation
    int choix = 0;

    // assignation
    printf("Rentrez votre choix : ");
    scanf("%d", &choix);

    // code
    switch (choix) {
        case 1:
            printf("Vous avez choisi PEPSI.\n");
            break;
        case 2: {
            printf("Vous avez choisi COCA COLA\n");
            break;
        }
        case 3: {
            printf("Vous avez choisi ORANGINA\n");
            break;
        }
        case 10:
            printf("Vous avez choisi CAFE.\n");
            break;
        case 11: {
            printf("Vous avez choisi THE\n");
            break;
        }
        default: {
            printf("Erreur : aucune boisson ne correspond à votre choix \n");
            break;
        }
    }

    // exit
    return 0;
}