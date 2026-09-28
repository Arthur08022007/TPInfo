#include <stdio.h>

void main (){
    long long n;
    printf("Entrez un entier : ");
    scanf("%lld", &n);
    if (n<2){
        printf("%lld n'est pas premier\n", n);
        return;
    }
    if (n==2){
        printf("%lld est premier\n", n);
        return;
    }
    if
    for (long long i=3; i*i <=n; i+=2){
        if (n%i==0){
            printf("%lld n'est pas premier\n", n);
            printf("Il est divisible par %lld\n", i);
            return;
        }
    }
    printf("%lld est premier\n", n);
    return;
}