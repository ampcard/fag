#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Maior que 50!");
    } else {
        printf("Menor que 50!");
    }

    return 0;
}