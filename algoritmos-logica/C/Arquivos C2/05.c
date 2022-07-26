#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("O numero e multiplo de 5");
    } else {
        printf("O numero nao e multiplo de 5");
    }

    return 0;
}