#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O número é positivo!";
    } else if (numero == 0) {
        cout << "O número é 0!";
    } else {
        cout << "O número é negativo!";
    }

    return 0;
}