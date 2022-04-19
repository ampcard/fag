#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero, soma;

    cout << "Insira um número: ";
    cin >> numero;

    soma = (numero + (numero + 1) + (numero + 2) + (numero + 3));

    cout << "A soma de " << numero << " com seus três números consecutivos é " << soma;

    return 0;
}