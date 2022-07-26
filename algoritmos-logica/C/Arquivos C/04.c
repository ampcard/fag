#include <stdio.h>

int main() {
    int anos, dias;

    printf("Insira sua idade: ");
    scanf("%d", &anos);

    dias = anos * 365;

    printf("%d anos = %d dias", anos, dias);
}