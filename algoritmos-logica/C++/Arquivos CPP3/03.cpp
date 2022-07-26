#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float deposito, rendimento;
    int taxa;

    cout << "Valor do depósito: R$";
    cin >> deposito;
    cout << "Porcentagem da taxa de juros: ";
    cin >> taxa;

    rendimento = (30 * (deposito * (taxa / 100)));

    cout << "Rendimento para 30 dias: R$" << rendimento;
    cout << "Valor inicial: R$" << deposito;
    cout << "Valor atualizado: R$" << (deposito + rendimento);

    return 0;
}