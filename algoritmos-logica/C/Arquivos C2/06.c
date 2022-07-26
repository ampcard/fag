#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n >= 100 && n <= 1000) {
        printf("O número esta entre 100 e 1000");
    } else {
        printf("O numero nao esta entre 100 e 1000");
    }

    return 0;
}