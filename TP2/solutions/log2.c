#include <stdio.h>

int main() {
    unsigned long long n;
    printf("Entrez un entier : ");
    scanf("%lld", &n);
    unsigned long long n_copy = n; 

    unsigned i=0;
    while (n>=2){
        i++;
        n=n/2;
        
    }
    printf("La partie entière du logarithme en base 2 de %lld est %d\n", n_copy, i);
    return 0;
}