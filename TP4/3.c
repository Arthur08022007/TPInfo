#include <stdio.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n < 0)
		return 1;

	long long somme = 0;
	for (int i = 0; i < n; ++i) {
		int valeur;
		if (scanf("%d", &valeur) != 1)
			return 1;
		somme += valeur;
	}

	printf("%lld\n", somme);
	return 0;
}
