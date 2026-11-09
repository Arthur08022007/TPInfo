#include <stdio.h>
#include <stdlib.h>

static void fusionner(int tableau[], int gauche, int milieu, int droite)
{
	int taille = droite - gauche + 1;
	int *temporaire = malloc((size_t)taille * sizeof(*temporaire));
	if (temporaire == NULL) {
		exit(EXIT_FAILURE);
	}

	int i = gauche;
	int j = milieu + 1;
	int k = 0;

	while (i <= milieu && j <= droite) {
		temporaire[k++] = tableau[i] <= tableau[j] ? tableau[i++] : tableau[j++];
	}
	while (i <= milieu) {
		temporaire[k++] = tableau[i++];
	}
	while (j <= droite) {
		temporaire[k++] = tableau[j++];
	}
	for (i = 0; i < taille; ++i) {
		tableau[gauche + i] = temporaire[i];
	}

	free(temporaire);
}

static void tri_fusion(int tableau[], int gauche, int droite)
{
	if (gauche >= droite) {
		return;
	}

	int milieu = gauche + (droite - gauche) / 2;
	tri_fusion(tableau, gauche, milieu);
	tri_fusion(tableau, milieu + 1, droite);
	fusionner(tableau, gauche, milieu, droite);
}

int main(void)
{
	int tableau[] = {38, 27, 43, 3, 9, 82, 10};
	int taille = (int)(sizeof(tableau) / sizeof(tableau[0]));

	tri_fusion(tableau, 0, taille - 1);

	for (int i = 0; i < taille; ++i) {
		printf("%d%s", tableau[i], i + 1 == taille ? "\n" : " ");
	}

	return 0;
}
