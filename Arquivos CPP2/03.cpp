#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if ((numero <= 50) && (numero >= 1)) {
        cout << "O número digitado está entre 1 e 50.";
    } else {
        cout << "O número digitado não está entre 1 e 50.";
    }

    return 0;
}