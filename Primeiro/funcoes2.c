#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10] = {6,5,2,8,1,4,3,10,9,7};
    int i;
    void ordenamCrescente(int vetor[], int n);

    ordemCrescente(vetor, 10);

    for(i = 0; i< 10 ; i++){
        printf("%i ", vetor[i]);
    }

    return 0;
}

void ordenamCrescente(int vetor[], int n){
    int i, j, temporaria;

    for(i = 0; i< n; i++){
        for(j = i + 1; j < n; ++j){
            if(vetor[i] > vetor[j]){
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = vetor[i];

            }

        }
    }

}
