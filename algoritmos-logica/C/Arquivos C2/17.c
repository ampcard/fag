#include <stdio.h>

int main() {
    int a, b;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}