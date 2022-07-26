#include <stdio.h>

int main() {
    float a, b, c, soma;

    printf("Valor A: ");
    scanf("%f", &a);
    printf("Valor B: ");
    scanf("%f", &b);
    printf("Valor C: ");
    scanf("%f", &c);

    soma = ((a * a) + (b * b) + (c * c));

    printf("Soma dos quadrados: %f", soma);

    return 0;
}