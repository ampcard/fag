#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Dobro do número: " << (numero * 2);
    } else {
        cout << "Triplo do número: " << (numero * 3);
    }

    return 0;
}