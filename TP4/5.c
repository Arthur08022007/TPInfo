/* Programme très simple de complexité exponentielle : Fibonacci récursif. */
#include <stdio.h>

unsigned long long fibonacci(unsigned int n)
{
	if (n < 2)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	unsigned int n;

	printf("Entrez n : ");
	if (scanf("%u", &n) != 1)
		return 1;

	printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
	return 0;
}
