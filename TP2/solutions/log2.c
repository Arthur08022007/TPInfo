#include <stdio.h>

int main() {
    unsigned long long int n; // long long int est un très grand int
    printf("Entrez un entier : ");
    scanf("%lld", &n);
    unsigned long long int n_copy = n; //Sert à exprimer le résultat

    unsigned int i=0; //Car i ne prendra jamais de valeurs négatives
    while (n>=2){
        i++;
        n=n/2;
        
    }

    //Avec un for:
    /*
    for (unsigned int i=0;n>=2;i++){
        n=n/2;
    }
    */

    printf("La partie entière du logarithme en base 2 de %lld est %d\n", n_copy, i);
    return 0;
}