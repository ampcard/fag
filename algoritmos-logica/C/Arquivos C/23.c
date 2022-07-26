#include <stdio.h>

int main() {
    char nome[100];
    float n1, n2, media;
    int matricula;

    printf("Nome: ");
    scanf("%s", &nome);
    printf("Matricula: ");
    scanf("%d", &matricula);
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Nome: %s\n", nome);
    printf("Numero matricula: %d\n", matricula);
    printf("Soma das notas: %.1f\n", (n1 + n2));
    printf("Media: %.1f", media);

    return 0;
}