#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int n1, n2, maior, menor;

    cout << "Primeiro número: ";
    cin >> n1;
    cout << "Segundo número: ";
    cin >> n2;

    maior = n1;
    menor = n1;

    if (n2 > maior) {
        maior = n2;
    }

    if (n2 < menor) {
        menor = n2;
    }

    cout << "Subtração do maior pelo menor: " << maior << " - " << menor << " = " << (maior - menor);

    return 0;
}