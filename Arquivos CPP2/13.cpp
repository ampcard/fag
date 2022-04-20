#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float n1, n2;
    char operacao;

    cout << "Primeiro número: ";
    cin >> n1;
    cout << "Segundo número: ";
    cin >> n2;
    cout << "Operação desejada: [+ - * /]: ";
    cin >> operacao;

    if (operacao == '+') {
        cout << n1 << " + " << n2 << " = " << (n1 + n2);
    } else if (operacao == '-') {
        cout << n1 << " - " << n2 << " = " << (n1 - n2);
    } else if (operacao == '*') {
        cout << n1 << " * " << n2 << " = " << (n1 * n2);
    } else if (operacao == '/') {
        cout << n1 << " / " << n2 << " = " << fixed << setprecision(2) << (n1 / n2);
    } else {
        cout << "Operação inválida!";
    }

    return 0;
}