#include <iostream>
#include <windows.h>

#pragma execution_character_Set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int n1, n2;

    cout << "Primeiro valor: ";
    cin >> n1;
    cout << "Segundo valor: ";
    cin >> n2;

    if ((n1 % n2 == 0) || (n2 % n1 == 0)) {
        cout << "São múltiplos";
    } else {
        cout << "Não são múltiplos";
    }

    return 0;
}