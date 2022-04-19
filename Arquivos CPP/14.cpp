#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float altura, raio, volume;

    cout << "Altura da lata em cm: ";
    cin >> altura;
    cout << "Raio da lata em cm: ";
    cin >> raio;

    volume = (3.14159 * (raio * raio) * altura);

    cout << fixed << setprecision(2);
    cout << "Volume da lata: " << volume << "cm³.";

    return 0;
}