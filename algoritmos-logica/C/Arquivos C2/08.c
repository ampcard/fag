#include <stdio.h>

int main() {
    int n;

    printf("Insira um numero");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d", (n * 2));
    } else {
        printf("%d", (n * 3));
    }

    return 0;
}