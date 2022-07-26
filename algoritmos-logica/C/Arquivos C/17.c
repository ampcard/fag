#include <stdio.h>

int main() {
    int n, soma;

    printf("Insira um numero: ");
    scanf("%d", &n);

    soma = n + (n + 1) + (n + 2) + (n + 3);

    printf("Soma de %d com seus tres consecutivos: %d\n\n", n, soma);

    return 0;
}