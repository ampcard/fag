#include <stdio.h>

int main() {
    float deposito, taxa, novo;

    printf("Valor do deposito: R$");
    scanf("%f", &deposito);
    printf("Valor da taxa diaria (%): ");
    scanf("%f", &taxa);

    novo = deposito + (deposito * (taxa / 100)) * 30;

    printf("Valor inicial: R$%f\n", deposito);
    printf("Valor atualizado: R$%f", novo);

    return 0;
}