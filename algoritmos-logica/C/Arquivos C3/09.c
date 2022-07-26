#include <stdio.h>

int main() {
    char conta[10];
    float saldo_devedor, limite, novo_saldo;
    int total_itens;

    printf("Numero da conta: ");
    scanf("%s", conta);
    printf("Saldo devedor: R$");
    scanf("%f", &saldo_devedor);
    printf("Valor dos itens cobrados: R$");
    scanf("%d", &total_itens);
    printf("Limite de credito: R$");
    scanf("%f", &limite);

    novo_saldo = saldo_devedor + total_itens - limite;

    if (novo_saldo > limite) {
        printf("Conta: %s\n", conta);
        printf("Limite: %f\n", limite);
        printf("Limite de Credito Excedido!");
    }

    return 0;
}