#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, r, s;

    cout << "Insira o valor de A: ";
    cin >> a;
    cout << "Insira o valor de B: ";
    cin >> b;
    cout << "Insira o valor de C: ";
    cin >> c;

    s = ((b + c) * (b + c)); // repeti 2x pra n importar a cmath
    d = ((a + b) * (a + b)); // idem
    r = ((d + s) / 2);

    cout << "Resultado: " << r;

    return 0;
}