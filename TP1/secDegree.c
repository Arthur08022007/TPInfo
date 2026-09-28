#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
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
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);

        printf("\nDeux solutions reelles distinctes :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);

        printf("\nUne solution reelle double :\n");
        printf("x = %.2lf\n", x1);
    }
    else {
        partieReelle = -b / (2 * a);
        partieImaginaire = sqrt(-delta) / (2 * a);

        printf("\nDeux solutions complexes conjuguees :\n");
        printf("x1 = %.2lf - %.2lfi\n", partieReelle, partieImaginaire);
        printf("x2 = %.2lf + %.2lfi\n", partieReelle, partieImaginaire);
    }

    return 0;
}