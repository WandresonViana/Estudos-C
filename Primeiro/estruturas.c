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

    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
    
    return 0;
}
