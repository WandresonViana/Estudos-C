#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    char mensagem[10];
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("Digite uma mensagem: \n");
    scanf("%s", &mensagem);

    if(num == 1){
        printf("Olá, Maria\n");
    }
    return 0;
}
