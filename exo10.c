//lib
#include <stdio.h>

int main(void) {
    // Declaration et initialisation
    int note, somme, cont ;
    note = somme = cont = 0;

    while(note>=0){
        printf("Rentrez une note :");
        scanf("%d", &note);

        if(note>=0){
            cont++;
            somme +=note;
        }
    }

    printf("La moyenne est %f", (float)somme/(float)cont);

    return 0;
}