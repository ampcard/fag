#include <stdio.h>

int main() {
    int a, b, n;

    a = 1;
    b = a;
    n = a + b;

    printf("%d - %d - %d - ", a, b, n);

    a = n + b;
    b = a + n;
    n = a + b;

    printf("%d - %d - %d - %d", a, b, n, (n + b));

    return 0;
}