#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota01, nota02, resultado;

    printf("Digite a primeira nota: \n");
    scanf("%f", nota01);
    fflush(stdin);

    printf("Digite a segunda nota: \n");
    scanf("%f", nota02);
    fflush(stdin);

    resultado = (nota01 + nota02)/2;

    if(resultado > 7 && resultado < 8){
        printf("Aluno aprovado!");
    }else{
        printf("Reprovado!");
    }

    return 0;
}
