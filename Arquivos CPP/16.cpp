#include <iostream>

using namespace std;

int main() {
    float a, b, c, resultado;

    cout << "Valor de A: ";
    cin >> a;
    cout << "Valor de B: ";
    cin >> b;
    cout << "Valor de C: ";
    cin >> c;

    resultado = ((a * a) + (b * b) + (c * c));

    cout << "A soma dos quadrados dos três valores é: " << resultado;

    return 0;
}