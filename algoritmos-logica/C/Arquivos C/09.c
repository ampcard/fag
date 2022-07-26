#include <stdio.h>

int main() {
    float n1, n2, n3, media_ponderada;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);

    media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);

    printf("Media ponderada: %.1f", media_ponderada);

    return 0;
}