#include <stdio.h>

int main() {
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce ja pode tirar sua CNH!");
    } else {
        printf("Voce ainda nao pode tirar sua CNH!");
    }

    return 0;
}