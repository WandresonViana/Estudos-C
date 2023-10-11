#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 21;
    agora.segundos = 22;

    printf("%i:%i:%i \n", agora.horas, agora.minutos, agora.segundos);

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos + 12;
    depois.segundos = agora.segundos + 21;

    printf("%i:%i:%i\n", depois.horas, depois.minutos, depois.segundos);
    
    return 0;
}
