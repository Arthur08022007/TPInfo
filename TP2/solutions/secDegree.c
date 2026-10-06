#include <stdio.h>
#include <math.h> // Nécessaire pour le calul d'une racine carrée

int main() {
    double a, b, c, delta; // le type double permet une très grande précision 
    double x1, x2;
    double partieReelle, partieImaginaire;

    printf("Entrez a : ");
    scanf("%lf", &a);

    printf("Entrez b : ");
    scanf("%lf", &b);

    printf("Entrez c : ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Ce n'est pas une equation du second degre.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a); //Calcul des deux racines
        x2 = (-b + sqrt(delta)) / (2 * a);

        printf("\nDeux solutions reelles distinctes :\n");
        printf("x1 = %.2lf\n", x1); //.2lf pour un double et afficher 2 nombre après la virgule
        printf("x2 = %.2lf\n", x2);
        return 0; // On arrête le programme
    }
    if (delta == 0) {
        x1 = -b / (2 * a);

        printf("\nUne solution reelle double :\n");
        printf("x = %.2lf\n", x1);
        return 0;
    }
    else { // On s'arrête içi pour le TP2
        partieReelle = -b / (2 * a);
        partieImaginaire = sqrt(-delta) / (2 * a);

        printf("\nDeux solutions complexes conjuguees :\n");
        printf("x1 = %.2lf - %.2lfi\n", partieReelle, partieImaginaire);
        printf("x2 = %.2lf + %.2lfi\n", partieReelle, partieImaginaire);
        return 0;
    }

}