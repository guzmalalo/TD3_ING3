//lib
#include <stdio.h>

int main(void) {
    // Declaration et initialisation
    int np = 0; // nombre de pierres
    int npt =1 ; // nombre de pierre totales
    int ne = 0; // nombre d'étages

    printf("Nombre de pierres ? ");
    scanf("%d", &np);

    while(np >= npt){
        ne++;
        npt = npt + ((ne+1)*(ne+1));
    }

    printf("Vous pouvez faire %d etages", ne);

    return 0;
}