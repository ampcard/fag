#include <stdio.h>

int main() {
    int idade, maiores, i;

    for (i = 1; i <= 10; i++) {
        printf("Idade da %d pessoa: ", i);
        scanf("%d", &idade);
        
        if (idade > 21) {
            maiores += 1;
        }
    }

    printf("Maiores de 21: %d", maiores);

    return 0;
}