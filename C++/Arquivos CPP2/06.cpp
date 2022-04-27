#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if ((numero >= 100) && (numero <= 1000)) {
        cout << "O número está dentro da faixa de 100 a 1000.";
    } else {
        cout << "O número está fora da faixa de 100 a 1000.";
    }

    return 0;
}