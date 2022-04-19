#include <iostream>

using namespace std;

int main() {
    int a, b, soma;

    a = 1;
    b = 1;
    soma = (a + b);

    cout << a << " → " << b << " → " << soma;

    a = (soma + b);
    b = (a + soma);
    soma = (b + a);

    cout << " → " << a << " → " << b << " → " << soma;

    a = (soma + b);

    cout << " → " << a;

    return 0;
}