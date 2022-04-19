#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float lado, area, perimetro;

    cout << "Informe a medida do lado do quadrado em cm: ";
    cin >> lado;

    area = (lado * lado);
    perimetro = (lado * 4);

    cout << fixed << setprecision(2);
    cout << "Área do quadrado: " << area << "cm²" << endl;
    cout << "Perímetro do quadrado: " << perimetro << "cm.";

    return 0;
}