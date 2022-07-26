#include <stdio.h>

int main() {
    int a, b;

    printf("Insira um numero: ");
    scanf("%d", &a);
    printf("Insira outro numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d - %d = %d", a, b, (a - b));
    } else if (b < a) {
        printf("%d - %d = %d", b, a, (b - a));
    } else {
        printf("Os numeros sao iguais!");
    }

    return 0;
}