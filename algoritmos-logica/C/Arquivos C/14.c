#include <stdio.h>

int main() {
    float volume, raio, altura;

    printf("Altura da lata (cm): ");
    scanf("%f", &volume);
    printf("Raio da lata (cm): ");
    scanf("%f", &raio);

    volume = 3.14159 * (raio * raio) * altura;

    printf("Volume da lata: %f", volume);

    return 0;
}