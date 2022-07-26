#include <stdio.h>

int main() {
    float area, base, altura;

    printf("Informe a base do triangulo (cm): ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo (cm): ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.2fcm^2", area);

    return 0;
}