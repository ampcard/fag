#include <stdio.h>

int main() {
    char operacao;
    int a, b;

    printf("Insira um numero: ");
    scanf("%d", &a);
    printf("Insira outro numero: ");
    scanf("%d", &b);
    printf("Operacao [+ - * /]: ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("%d + %d = %d", a, b, (a + b));
    } else if (operacao == '-') {
        printf("%d - %d = %d", a, b, (a - b));
    } else if (operacao == '*') {
        printf("%d * %d = %d", a, b, (a - b));
    } else if (operacao == '/') {
        printf("%d / %d = %.2f", a, b, ((float)a / b));
    } else {
        printf("Operacao invalida!");
    }

    return 0;
}