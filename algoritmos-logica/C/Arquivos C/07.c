#include <stdio.h>

int main() {
    float l_terreno, c_terreno, l_casa, c_casa, area_livre;

    printf("Largura do terreno (m): ");
    scanf("%f", &l_terreno);
    printf("Comprimento do terreno (m): ");
    scanf("%f", &c_terreno);
    printf("Largura da casa (m): ");
    scanf("%f", &l_casa);
    printf("Comprimento da casa (m): ");
    scanf("%f", &c_casa);

    area_livre = (l_terreno * c_terreno) - (l_casa * c_casa);

    printf("Area livre: %.1fm^2", area_livre);

    return 0;
}