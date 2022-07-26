#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media: %.1f", media);

    return 0;
}