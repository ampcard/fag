#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float area_livre, comprimento_casa, comprimento_terreno, largura_casa, largura_terreno;

    cout << "Comprimento do terreno: ";
    cin >> comprimento_terreno;
    cout << "Largura do terreno: ";
    cin >> largura_terreno;
    cout << "Comprimento da casa: ";
    cin >> comprimento_casa;
    cout << "Largura da casa: ";
    cin >> largura_casa;

    area_livre = ((comprimento_terreno * largura_terreno) - (comprimento_casa * largura_casa));

    cout << fixed << setprecision(1);
    cout << "Área livre do terreno: " << area_livre << "m².";

    return 0;
}