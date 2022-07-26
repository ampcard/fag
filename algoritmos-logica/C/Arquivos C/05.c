#include <stdio.h>

int main() {
    float salario_bruto, salario_liquido, descontos, adicionais;

    printf("Insira seu salario: R$");
    scanf("%f", &salario_bruto);
    printf("Descontos: R$");
    scanf("%f", &descontos);
    printf("Adicionais: R$");
    scanf("%f", &adicionais);

    salario_liquido = salario_bruto + adicionais - descontos;

    printf("Salario liquido: R$%.2f", salario_liquido);

    return 0;
}