#include <stdio.h>

int main() {
    int idade, meses, horas;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    meses = idade * 12;
    horas = meses * 30 * 24;

    printf("Meses: %d\n", meses);
    printf("Horas: %d\n", horas);

    return 0;
}