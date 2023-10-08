#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int numero;
    double saldo;
} ContaBancaria ;

void inicia(ContaBancaria* conta, int numero, double saldo) {
    conta->numero = numero;
    conta->saldo = saldo;
}

void deposito(ContaBancaria* conta, double valor) {
    conta->saldo += valor;
}

void saque(ContaBancaria* conta, double valor) {
    conta->saldo -= valor;
}

void imprime(ContaBancaria conta) {
    printf("Numero: %d\n", conta.numero);
    printf("Saldo: %f\n", conta.saldo);
}

ContaBancaria lista[10];  // cria um vetor de 10 contas.

int totalDeContas = 0;

void adiciona(ContaBancaria conta) {
      if (totalDeContas == 0) {
          lista[0] = conta;
          totalDeContas++;
        } else {
          lista[totalDeContas] = conta;
          totalDeContas++;
        }   
}

ContaBancaria pega(int posicao) {
    ContaBancaria conta;
    // implementação
    for(int i = 0; i < totalDeContas; i++){
        if(lista[i].numero == posicao){
            imprime(lista[i]);
        }else{
            printf("Conta não encontrada!");
        }
    }
    return conta; 
}

void remover(int posicao) {
    // implementação
}

int contem(ContaBancaria* conta) {
    // implementação
    return 0;
}

int tamanhoLista() {
    return totalDeContas;
}

void imprimeLista() {
    printf("\n\tListagem de Contas\n\n");
    for (int i = 0; i < totalDeContas; i++) {
        imprime(lista[i]);
    }
}

int main() {
    
    ContaBancaria conta1;
   
    int continuar = 1;
    do {
        printf("\n\tListagem de Contas\n\n");
        printf("1. Adiconar Conta\n");
        printf("2. Pegar a conta de dada posicao\n");
        printf("3. Remover a conta de dada posicao\n");
        printf("4. Verificar se a conta esta armazenada\n");
        printf("5. Imprimir todas as contas armazenadas\n");

        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls");

        switch(continuar) {
            case 1:
                printf("Digite o numero da conta que deseja adiconar: \n");
                int num = -1;
                scanf("%d", &num);
                printf("Digite o saldo da conta que deseja adiconar: \n");
                float saldo = -1;
                scanf("%f", &saldo);
                inicia(&conta1, num, saldo);    
                adiciona(conta1);
                printf("\nConta Adicionada! \n");
                break;

            case 2:
                //chamada da função pega()
                printf("Digite a posição: \n");
                int posicao = 0;
                scanf("%d", &posicao);
                pega(posicao);
                break;

            case 3:
                //chamada da funação remover();
                printf("Digite a posição para remover");
                break;
            case 4:
                //chamada da função contem();
                break;
            case 5:
                imprimeLista();
                break;    
            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);



    return 0;
}
