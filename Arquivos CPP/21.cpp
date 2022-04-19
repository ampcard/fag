#include <iostream>

using namespace std;

int main() {
    int a, b, temp;

    cout << "Valor de A: ";
    cin >> a;
    cout << "Valor de B: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Valores invertidos:\nA: " << a << "\nB: " << b;

    return 0;
}