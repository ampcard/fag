#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, maior, menor;

    cout << "Primeiro valor: ";
    cin >> n1;
    cout << "Segundo valor: ";
    cin >> n2;
    cout << "Terceiro valor: ";
    cin >> n3;

    maior = n1;
    menor = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }

    cout << "Menor valor: " << menor << "\nMaior valor: " << maior;

    return 0;
}