#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sexo[1];
    float peso_ideal = 0.0;
    int altura;

    printf("Altura (cm): ");
    scanf("%d", &altura);
    printf("Sexo [F / M]: ");
    scanf(" %c", sexo);

    if (!strcmp(sexo, "M") || !strcmp(sexo, "m")) {
        peso_ideal = 72.7 * (altura / 100.0) - 58;
    } else if (!strcmp(sexo, "F") || !strcmp(sexo, "f")) {
        peso_ideal = 62.1 * (altura / 100.0) - 44.7;
    } else {
        printf("Sexo invalido!");
    }

    if (peso_ideal != 0.0) {
        printf("Seu peso ideal e: %.2f", peso_ideal);
    }

    return 0;
}