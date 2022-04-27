#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if (numero % 2 == 0) { // só aceita números com até 9 digitos por causa do int
        cout << "O número é par.";
    } else {
        cout << "O número é ímpar.";
    }

    return 0;
}