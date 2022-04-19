#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if (numero > 50) {
        cout << "O número digitado é maior que 50.";
    } else if (numero == 50) {
        cout << "O número digitado é 50.";
    } else {
        cout << "O número digitado é menor que 50.";
    }

    return 0;
}