#include <stdio.h>

int main() {
    int a, b, c;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);

    if (b < a) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    if (c < a) {
        a = a + c;
        c = a - c;
        a = a - c;
    }

    if (c < b) {
        c = c + b;
        b = c - b;
        c = c - b;
    }

    printf("%d - %d - %d", a, b, c);

    return 0;
}