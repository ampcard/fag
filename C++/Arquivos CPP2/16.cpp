#include <iostream>
#include <string>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int idade;
    string classificacao;

    cout << "Insira a idade do nadador: ";
    cin >> idade;

    if (idade >= 5) {
        if ((idade >= 5) && (idade <= 7)) {
            classificacao = "Infantil A";        
        } else if ((idade >= 8) && (idade <= 10)) {
            classificacao = "Infantil B";
        } else if ((idade >= 11) && (idade <= 13)) {
            classificacao = "Juvenil A";
        } else if ((idade >= 14) && (idade <= 17)) {
            classificacao = "Juvenil B";
        } else if (idade >= 18) {
            classificacao = "Adulto";
        }

        cout << "Classificação do nadador: " << classificacao;
    } else {
        cout << "O nadador não se classifica em nenhuma categoria.";
    }

    return 0;
}