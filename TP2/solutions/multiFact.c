#include <stdio.h>

int main(){
    int n, k;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &n, &k);
    int result = 1;
    for (;n-k>0;n-=k){
        result *= n;
    }
    printf("Le résultat est: %d\n", result);
    return 0;
    
}