#include <stdio.h>


int main(){
	unsigned int n, m;
	unsigned long long coeff = 1;
    printf("Entrez des valeurs de n et m pour calculer leur coefficient binomial\n");

	scanf("%u %u", &n, &m);
    if(m<n-m){
        m=n-m;
    }
    for (unsigned int i=1;i<=m;i++){
        coeff*=(n-m+i);
        coeff/=i;
    }
    


	printf("C(%u, %u) = %llu\n", n, m, coeff);
	return 0;
}



