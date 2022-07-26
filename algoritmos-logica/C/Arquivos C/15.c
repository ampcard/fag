#include <stdio.h>

int main() {
    float prestacao, valor, taxa;
    int tempo;

    printf("Valor da prestacao: R$");
    scanf("%f", &valor);
    printf("Taxa de atraso da prestacao: R$");
    scanf("%f", &taxa);
    printf("Meses atrasados: ");
    scanf("%d", &tempo);

    prestacao = valor + (valor * (taxa / tempo) * tempo);

    printf("Valor da prestacao em atraso: R$%f", prestacao);

    return 0;
}