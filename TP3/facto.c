#include <stdio.h>

int main(){

	int nb;
	printf("Entrez un nombre à factoriser\n");
	scanf("%d", &nb);

	int counter = 0;
	int d = 2;

	while(nb > 1){ 
		if(nb%d == 0){ // On ne trouvera jamais un diviseur non premier car on incrémente ceux ci, on ne trouvera pas 6 car nb plus diviseur par 2, on ne trouvera pas 8 pour le même raison, ...
			counter++;
			nb /= d; //nb=nb/d;
		}
		else{
			if(counter != 0){
				printf("%d^%d ", d, counter);
				counter = 0;
			}
			d++;
		}
	}

	if(counter != 0){
		printf("%d^%d", d, counter);
	}

	return 0;

}