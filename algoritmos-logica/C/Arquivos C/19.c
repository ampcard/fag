#include <stdio.h>

int main() {
    int anos, meses, dias, idade;

    printf("Insira sua idade: ");
    scanf("%d", &anos);
    printf("Insira há quantos meses foi o seu aniversario: ");
    scanf("%d", &meses);
    printf("Insira quantos dias se passaram do dia de seu aniverasrio: ");
    scanf("%d", &dias);

    dias = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias e: %d", dias);

    return 0;
}