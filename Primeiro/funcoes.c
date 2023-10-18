#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Funções
    void imprimeMensagem(void);
    float calcularMedia(float x, float y);

    //variaveis
    float valor01, valor02;

    printf("Digite valor\n");
    scanf("%f", &valor01);
    printf("Digite o valor\n");
    scanf("%f", &valor02);
    printf("valor 1 %f\n", valor01);
    printf("Valor dois %f\n", valor02);

    
    float resultado = calcularMedia(valor01, valor02);
    printf("A media e : %f \n", resultado);
    if(resultado > 5){
        printf("Aprovado\n");
    }

    return 0;
}

void imprimeMensagem(void){
    printf("Teste \n");
}

float calcularMedia(float x, float y){
    float resultado = (x + y)/2;
    return resultado;
}