#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float media, nota1, nota2;

    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;

    media = ((nota1 + nota2) / 2);

    if (media >= 7) {
        cout << "Aprovado";
    } else if (media < 4) {
        cout << "Reprovado";
    } else {
        cout << "Exame";
    }

    return 0;

}