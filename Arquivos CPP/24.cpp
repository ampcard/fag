#include <iostream>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int idade;
    float meses, horas;

    cout << "Digite sua idade: ";
    cin >> idade;

    meses = (idade * 12);
    horas = (meses * 30 * 24);

    cout << "Sua idade em meses é " << meses << " meses." << endl;
    cout << "Sua idade em horas é " << horas << " horas.";

    return 0;
}