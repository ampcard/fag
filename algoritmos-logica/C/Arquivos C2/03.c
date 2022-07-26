#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 50) {
        printf("O numero esta entre 1 e 50");
    } else {
        printf("O numero nao esta entre 1 e 50");
    }

    return 0;
}