#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int aulas, presencas;
    float media, nota1, nota2, nota3, nota4, percentual_presenca;
    string nome;

    cout << "Insira o nome do aluno: ";
    cin >> nome;
    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;
    cout << "Terceira nota: ";
    cin >> nota3;
    cout << "Quarta nota: ";
    cin >> nota4;
    cout << "Informe a quantidade de aulas da matéria: ";
    cin >> aulas;
    cout << "Quantidade de presenças do aluno: ";
    cin >> presencas;

    percentual_presenca = (presencas * 100) / aulas;
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (percentual_presenca >= 75.0 && media >= 7.0) {
        cout << "Nome: " << nome;
        cout << "Média: " << media;
        cout << "Aprovado";
    } else {
        cout << "Nome: " << nome;
        cout << "Reprovado";
    }

    return 0;
}