
#include <stdio.h>

int main(void)
{
	int n;
	int m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", i * n + j);
		}
		printf("\n");
	}

	return 0;
}
