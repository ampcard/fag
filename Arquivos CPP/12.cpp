#include <iostream> // input e output
#include <iomanip> // setprecision() e fixed
#include <windows.h> // utf-8
#include <cmath> // pow() e sqrt()

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float distancia, x1, y1, x2, y2;

    cout << "Localização do ponto P(x1, y1)" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "Localização do ponto P(x2, y2)" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    distancia = sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));

    cout << fixed << setprecision(2);
    cout << "Distância dos pontos no plano: " << distancia;

    return 0;
}