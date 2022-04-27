#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int idade;

    cout << "Insira sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Você já pode tirar sua CNH.";
    } else {
        cout << "Você ainda não pode tirar sua CNH, falta(m) " << (18 - idade) << " ano(s).";
    }

    return 0;
}