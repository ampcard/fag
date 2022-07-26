#include <stdio.h>

int main() {
    int i, fatorial = 1;

    for (i = 1; i <= 6; i++) {
        fatorial *= i;
    }

    printf("6! = %d", fatorial);

    return 0;
}