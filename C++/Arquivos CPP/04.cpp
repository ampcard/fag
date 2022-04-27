#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int idade_anos, idade_dias;

    cout << "Insira sua idade: ";
    cin >> idade_anos;

    idade_dias = (idade_anos * 365);

    cout << "Sua idade em dias é " << idade_dias << " dias." << endl;;

    return 0;
}