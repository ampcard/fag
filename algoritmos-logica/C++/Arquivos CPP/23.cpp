#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    string nome;
    int matricula;
    float nota1, nota2, media;

    cout << "Nome do aluno: ";
    cin >> nome;
    cout << "Número da matrícula: ";
    cin >> matricula;
    cout << "Primeira nota bimestral: ";
    cin >> nota1;
    cout << "Segunda nota bimestral: ";
    cin >> nota2;

    media = ((nota1 + nota2) / 2);

    cout << "Nome: " << nome << "\nN° matrícula: " << matricula << endl;
    cout << "Soma das notas: " << (nota1 + nota2) << "\nMedia: " << fixed << setprecision(1) << media;

    return 0;
}