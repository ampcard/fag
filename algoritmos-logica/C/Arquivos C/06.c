#include <stdio.h>

int main() {
    float lado, area, perimetro;

    printf("Informe o lado do quadrado (cm): ");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("Area do quadrado: %.2fcm^2\n", area);
    printf("Perimetro do quadrado: %.2fcm", perimetro);

    return 0;
}