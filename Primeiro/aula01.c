#include <stdio.h>
#define texto "Entrada e saida de dados."

int main(int argc, char const *argv[])
{
    int numero = 5;
    char nome[15] = "Maria";

    printf("Meu nome é %s\n", nome);
    printf("Isso é um número %d \n", numero);
    printf("Meu primeiro programa em C!\n");
    printf("%s\n", texto);    
    return 0;
}
