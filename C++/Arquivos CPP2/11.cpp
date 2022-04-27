#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int a, b, c, temp;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    if (b < a) {
        temp = a;
        a = b;
        b = temp;
    }

    if (c < a) {
        temp = a;
        a = c;
        c = temp;
    }

    if (c < b) {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << " → " << b << " → " << c;

    return 0;
}