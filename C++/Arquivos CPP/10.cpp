#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set("utf-8")

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int tempo_segundos, horas, minutos, segundos;

    cout << "Informe o tempo de duração do evento em segundos: ";
    cin >> tempo_segundos;

    horas = (tempo_segundos / 3600); // divisão de inteiro por inteiro retorna inteiro
    minutos = ((tempo_segundos % 3600) / 60);
    segundos = ((tempo_segundos % 3600) % 60);

    cout << "Duração do evento em horas: " << horas << ":" << minutos << ":" << segundos;

    return 0;
}