#include <stdio.h>

int main() {
    int segundos, minutos, horas;

    printf("Duracao do evento em segundos: ");
    scanf("%d", &segundos);

    horas = (segundos / 3600);
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;

    printf("Duração do evento em horas: %d:%d:%d", horas, minutos, segundos);

    return 0;
}