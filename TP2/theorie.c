#include <stdio.h>

int main(){
    //Illustration de la différence entre 
    //Test 1 avec ++x
    int x=0, z=0;
    z = ++x;
    printf("Valeur de z: %d \n",z); // On print la valeur de z
    printf("Valeur de x: %d \n",x); // On print la valeur de x

    //Test 1 avec x++
    x=0; 
    z=0;
    z = x++;
    printf("Valeur de z: %d \n",z); // On print la valeur de z
    printf("Valeur de x: %d \n",x); // On print la valeur de x


    // Différence entre while et do while
    int compteur = 0;

    // La condition est testée avant l'exécution du bloc :
    // comme compteur vaut 0, le message ne s'affiche pas.
    while (compteur > 0) {
        printf("Bloc while execute\n");
        compteur--;
    }

    // Le bloc est exécuté avant le test de la condition :
    // le message s'affiche donc une fois, même si compteur vaut 0.
    do {
        printf("Bloc do while execute\n");
        compteur--;
    } while (compteur > 0);


    return 0;

}