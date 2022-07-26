#include <stdio.h>

int main() {
    float custo_final, custo_fabrica;

    printf("Custo de fabrica: R$");
    scanf("%f", &custo_fabrica);

    custo_final = custo_fabrica + (custo_fabrica * ((28 + 45) / 100.0));

    printf("Custo final: R$%.2f", custo_final);

    return 0;
}