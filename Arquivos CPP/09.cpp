#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float nota1, nota2, nota3, media_ponderada;

    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;
    cout << "Terceira nota: ";
    cin >> nota3;

    media_ponderada = ((nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5));

    cout << fixed << setprecision(1);
    cout << "Média ponderada das notas: " << media_ponderada;

    return 0;
}