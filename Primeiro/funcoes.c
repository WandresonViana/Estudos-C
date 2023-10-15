#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Funções
    void imprimeMensagem(void);
    float calcularMedia(float x, float y);

    int valor01, valor02;

    imprimeMensagem();
    float resultado = calcularMedia(5,2);
    printf("A media e : %f", resultado);

    return 0;
}

void imprimeMensagem(void){
    printf("Teste \n");
}

float calcularMedia(float x, float y){
    float resultado = (x + y)/2;
    return resultado;
}