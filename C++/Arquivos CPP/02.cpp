#include <iostream>
#include <windows.h> // utf-8

#pragma execution_character_set("utf-8") // utf-8

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // utf-8

    float base, altura, area;

    cout << "Insira a base do triangulo em cm: ";
    cin >> base;
    cout << "Insira a altura do triangulo em cm: ";
    cin >> altura;

    area = ((base * altura) / 2);

    cout << "A área do triagulo é de " << area << "cm².";
    
    return 0;
}