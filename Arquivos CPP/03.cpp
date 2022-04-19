#include <iostream>
#include <iomanip> // setprecision(2), valor decimal (1 casa após a virgula)
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float nota1, nota2, nota3, media;

    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;
    cout << "Terceira nota: ";
    cin >> nota3;

    media = ((nota1 + nota2 + nota3) / 3);

    cout << "Média das notas: " << fixed << setprecision(1) << media << endl;

    return 0;
}
