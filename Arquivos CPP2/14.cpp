#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    string codigo;
    float preco;
    int qtde;


    if ((codigo == "001") || (codigo == "004")) {
        preco = 5.32;
    } else if ((codigo == "002") || (codigo == "005")) {
        preco = 6.45;
    } else if (codigo == "003") {
        preco = 2.37;
    }

    cout << "Valor da compra: R$" << (preco * qtde);

    return 0;
}