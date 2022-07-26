#include <stdio.h>

int main() {
    int a, b, c;

    printf("Primeiro lado: ");
    scanf("%d", &a);
    printf("Segundo lado: ");
    scanf("%d", &b);
    printf("Terceiro lado: ");
    scanf("%d", &c);

    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        printf("Pode formar um triangulo ");
        if (a == b && b == c) {
            printf("equilatero");
        } else if (a != b && b != c && c != a) {
            printf("isosceles");
        } else {
            printf("escaleno");
        }
    } else {
        printf("Nao pode formar um triangulo");
    }

    return 0;
}