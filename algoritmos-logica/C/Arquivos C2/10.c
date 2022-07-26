#include <stdio.h>

int main() {
    int a, b, c, maior, menor;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);

    maior = menor = a;

    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    printf("Maior: %d\nMenor: %d", maior, menor);

    return 0;
}