#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int anos, meses, dias, idade_dias;

    cout << "Insira sua idade: ";
    cin >> anos;
    cout << "Informe há quantos meses foi o seu aniversário: ";
    cin >> meses;
    cout << "Informe quantos dias se passaram do seu aniversário: ";
    cin >> dias;

    idade_dias = ((anos * 365) + (meses * 30) + dias);

    cout << "Você já viveu " << idade_dias << " dias!";

    return 0;
}