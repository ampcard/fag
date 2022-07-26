#include <stdio.h>
#include <string.h>

int main() {
    char codigo[3];
    float preco = 0.0;
    int qtde;

    printf("Quantidade: ");
    scanf("%d", &qtde);
    printf("Codigo: ");
    scanf("%s", codigo);

    if (!strcmp(codigo, "001") || !strcmp(codigo, "004")) {
        preco = qtde * 5.32;
    } else if (!strcmp(codigo, "002") || !strcmp(codigo, "005")) {
        preco = qtde * 6.45;
    } else if (!strcmp(codigo, "003")) {
        preco = qtde * 2.37;
    } else {
        printf("Codigo de produto invalido");
    }

    if (preco != 0.0) {
        printf("Preco total: R$%.2f", preco);
    }

    return 0;
}