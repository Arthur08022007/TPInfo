#include <stdio.h>

int main (){
    unsigned long long int F1=1;
    unsigned long long int F2=1;
    unsigned long long int F3; //ainsi le programme fonctionne jusque F93 soit 12 200 160 415 121 876 738
    unsigned int indice;
    printf("Entrez l'indice du nombre recherché\n");
    scanf("%d",&indice);
    if (indice==1){
        printf("Le premier nombre de la suite est 1\n");
        return 0;
    }
    if (indice==2){
        printf("Le deuxième nombre de la suite est 1 \n");
        return 0;
    }
    for (unsigned int i=3;i<=indice;i++){
        printf("Valeur de F1=%llu\n",F1);
        printf("Valeur de F2=%llu\n\n",F2);

        F3=F2+F1;
        printf("Valeur de F3=%llu\n\n",F3); 
        F1=F2;
        
        F2=F3;
    }
    printf("Le %uème nombre de la suite est %llu\n",indice, F3);
    return 0;

    
}


