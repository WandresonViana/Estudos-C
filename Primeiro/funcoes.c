#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor01, valor02;
    void imprimeMensagem(void);

    imprimeMensagem();

    return 0;
}

void imprimeMensagem(void){
    printf("Teste \n");
}

float calcularMedia(float x, float y){
    float resultado;
    resultado = (x + y)/2;
    return resultado;
}