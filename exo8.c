//lib
#include <stdio.h>

int main(void) {
    // Declaration et initialisation
    int n = 0;

    // Input
    do{
        printf("Donnez un nombre entier : ");
        scanf("%d", &n);
        // validation
    }while(!(n%2==0 && n%7==0));

    return 0;
}