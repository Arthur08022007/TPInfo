#include <stdio.h>

int main (){
    unsigned long long int a; //Car a ne prendra jamais de valer négatives
    printf("Entrez un entier : ");
    scanf("%u", &a);
    if (a==0){
        printf("%u n'est pas premier\n", a);
        return 0;
    }

    //Avec un while
    unsigned long long int div=2;
    while (div*div <=a){
        if (a%div==0){
            printf("%u n'est pas premier", a);
            printf("Il est divisible par %u\n", div);
            return 0; // On arrête le programme si on trouve un diviseur 
        }
        div++;
    }



    printf("%u est premier\n", a);
    return 0;
}