#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("O numero e positivo");
    } else if (n == 0) {
        printf("O numero e zero");
    } else {
        printf("O numero e negativo");
    }

    return 0;
}