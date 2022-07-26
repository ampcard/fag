#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    printf("Insira seu nome: ");
    scanf("%s", &nome);
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome e %s e voce tem %d anos.", nome, idade);

    return 0;
}