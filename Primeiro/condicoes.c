#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    int num;
    char mensagem[10];
    printf("Digite um numero: \n");
    scanf("%d", &num);
   

    if(num == 1 || num == 3){
        printf("Olá, Maria\n");
    }
    else{
        printf("Não é a Maria!\n");
    }
    return 0;
}
