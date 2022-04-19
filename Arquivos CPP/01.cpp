#include <iostream>
#include <string>
#include <windows.h> // utf-8

#pragma execution_character_set("utf-8") // utf-8

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // utf-8

    // char nome; // char só aceita um caractere por padrão
    string nome;
    int idade;

    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Insira sua idade: ";
    cin >> idade;

    cout << "Seu nome é " << nome << " e você tem " << idade << " anos." << endl;

    return 0;
}
