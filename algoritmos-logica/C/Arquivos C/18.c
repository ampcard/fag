#include <stdio.h>

int main() {
    int a, b, c, d, s, r;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    s = (b + c) * (b + c);
    d = (a + b) * (a + b);
    r = (d + s) / 2;

    printf("Resultado: %d", r);

    return 0;
}