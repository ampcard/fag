#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float prestacao, taxa, valor;
    int tempo;

    cout << "Valor da prestação: R$";
    cin >> valor;
    cout << "Taxa mensal (%): ";
    cin >> taxa;
    cout << "Meses atrasados: ";
    cin >> tempo;

    prestacao = (valor + (valor * (taxa / 100) * tempo));

    cout << fixed << setprecision(2);
    cout << "O valor da prestação em atraso é de: R$" << prestacao;

    return 0;
}
