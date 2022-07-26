#include <stdio.h>

int main() {
    int a, b;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valores invertidos:\n");
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d", b);

    return 0;
}