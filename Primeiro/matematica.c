#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, soma, sub, mult , divi;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);

    soma = a + b;
    sub = a- b;
    mult = a * b;
    divi = a / b;


    printf("resultados: \n");
    printf("Soma: %d \n", soma);
    printf("Subtracao: %d \n", sub);
    printf("Multiplicacao: %d \n", mult);
    printf("Divisao: %d \n", divi);
    printf("Fim do programa!");
    return 0;
}
