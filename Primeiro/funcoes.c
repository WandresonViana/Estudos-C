#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Funções
    void imprimeMensagem(void);
    float calcularMedia(float x, float y);
    void aprovacao(float valor);

    //variaveis
    float valor01, valor02;

    printf("Digite valor\n");
    scanf("%f", &valor01);
    printf("Digite o valor\n");
    scanf("%f", &valor02);

    printf("Primeiro valor %f\n", valor01);
    printf("Segundo valor %f\n", valor02);

    
    float resultado = calcularMedia(valor01, valor02);
    printf("A media e : %f \n", resultado);

    aprovacao(resultado);

    return 0;
}

void imprimeMensagem(void){
    printf("Teste \n");
}

float calcularMedia(float x, float y){
    float resultado = (x + y)/2;
    return resultado;
}

void aprovacao(float valor){
    if(valor > 6){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
}