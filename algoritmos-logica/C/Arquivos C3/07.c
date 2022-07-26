#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5 / 9.0);

    printf("Temperatura em Celsius: %.2f", celsius);

    return 0;
}