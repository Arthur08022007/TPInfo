#include <stdio.h>

int main(void)
{
	int n;

	printf("Entrez un entier : ");
	if (scanf("%d", &n) != 1)
		return 1;

	if (n < 2) {
		printf("%d n'est pas premier.\n", n);
		return 0;
	}

	for (int diviseur = 2; diviseur <= n / diviseur; diviseur++) {
		if (n % diviseur == 0) {
			printf("%d n'est pas premier.\n", n);
			return 0;
		}
	}

	printf("%d est premier.\n", n);
	return 0;
}
