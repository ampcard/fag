#include <stdio.h>

int main() {
    int arr[2][3], i, j;

    for (i = 0; i < 2; i ++) {
        for (j = 0; j < 3; j++) {
            printf("Insira um valor para arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Elementos no array bidimensional: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j ++) {
            printf("%d ", arr[i][j]);
            if (j == 2) { // 1 2 3 \n
                printf("\n");
            }
        }
    }

    return 0;
}