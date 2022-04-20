#include <iostream>
#include <string>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float ladoA, ladoB, ladoC;
    string tipo_triangulo;

    cout << "Valor do primeiro lado: ";
    cin >> ladoA;
    cout << "Valor do segundo lado: ";
    cin >> ladoB;
    cout << "Valor do terceiro lado: ";
    cin >> ladoC;

    if ((ladoA < (ladoB + ladoC)) && (ladoB < (ladoA + ladoC)) && (ladoC < (ladoA + ladoB))) {

        if ((ladoA == ladoB) && (ladoB == ladoC)) {
            tipo_triangulo = "equilátero";
        } else if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoC != ladoA)) {
            tipo_triangulo = "escaleno";
        } else {
            tipo_triangulo = "isósceles";
        }

        cout << "As três medidas podem formar um triângulo " << tipo_triangulo;
    } else {
        cout << "As três medidas não podem formar um triângulo";
    }

    return 0;
}