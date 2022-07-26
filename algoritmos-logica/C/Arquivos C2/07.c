#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}