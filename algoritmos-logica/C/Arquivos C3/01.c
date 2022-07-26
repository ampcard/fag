#include <stdio.h>

int main() {
    char nome[100];
    float n1, n2, n3, n4, media, presenca;
    int qtde_aulas, presenca_aluno;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);
    printf("Quantidade de aulas: ");
    scanf("%d", &qtde_aulas);
    printf("Quantidade de presencas: ");
    scanf("%d", &presenca_aluno);

    media = (n1 + n2 + n3 + n4) / 4;
    presenca = (100 * presenca_aluno) / qtde_aulas;

    if (media >= 7 || media >= 70 && presenca >= 75) {
        printf("Nome: %s\nMedia: %f\nAprovado!", nome, media);
    } else {
        printf("Nome: %s\nReprovado!", nome);
    }

    return 0;
}