#include <stdio.h> //Nécessaire pour printf et scanf

int main(){
    unsigned int n, k; //Car n ne prendra jamais de valeurs négatives tout comme k
    printf("Entrez deux entiers: ");
    scanf("%u %u", &n, &k);
    unsigned int resultat = 1;
    
    //Avec while
    int mult = n; //Car à la dernière exécution de la boucle, mult prendra une valeur négative (pour ainsi être rejeté par le gardien de boucle)
    while(mult > 0){
        resultat*=mult;
        mult -= k; // Equivalent à mult = mult - k

    }


    //Avec un for:
    /*
    for (int mult = n;mult>0;i++;mult-=k){
        resultat*=mult;
    }
    */

    printf("Le résultat est: %u\n", resultat);
    return 0;
    
}