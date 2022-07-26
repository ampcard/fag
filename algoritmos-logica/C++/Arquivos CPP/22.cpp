#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float extras, custo_fabrica, custo_final;

    cout << "Custo de fábrica do carro: R$";
    cin >> custo_fabrica;
    extras = 28 + 45; // distribuidor + impostos

    custo_final = (custo_fabrica + (custo_fabrica * (extras / 100)));
    
    cout << fixed << setprecision(2);
    cout << "Custo final do carro: R$" << custo_final;

    return 0;
}