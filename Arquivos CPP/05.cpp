#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float salario_liquido, salario_bruto, descontos, adicionais;

    cout << "Salário bruto: R$";
    cin >> salario_bruto;
    cout << "Descontos: R$";
    cin >> descontos;
    cout << "Adicionais: R$";
    cin >> adicionais;

    salario_liquido = (salario_bruto - descontos + adicionais);

    // setprecision() inclui tanto a parte decimal quanto a parte inteira, retornando uma notação
    // científica caso o número exceta seu parâmetro. Fixed permite que o setprecision atue apenas
    // na parte decimal, mantendo os números antes do ponto intactos. 
    cout << "Salário líquido: R$" << fixed << setprecision(2) << salario_liquido << endl;

    return 0;
}