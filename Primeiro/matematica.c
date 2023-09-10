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
    return 0;
}
