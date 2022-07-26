#include <stdio.h>

int main() {
    int a, b;

    printf("Insira um numero: ");
    scanf("%d", &a);
    printf("Insira outro numero: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, (a + b));
    printf("%d - %d = %d", a, b, (a - b));

    return 0;
}