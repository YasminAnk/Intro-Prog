// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <stdlib.h>

#define TAM 100000

void imprime(int vetor[], int tamanho){
    for (int i = 0; i<tamanho; i++){
        printf("Quantidade de numeros %d: %d \n", i+1, vetor[i]);
    }
}

int main(){
    int n = 0, vet[TAM];
    printf("Digite um valor menor ou igual a 500: ");
    scanf("%d", &n);
    int A[n+1];

    // Preenchendo o vetor com 100.00 numeros inteiros aleatorios
    for (int i = 0; i<TAM; i++){
        vet[i] = 1+ (rand()%n);
    }
    printf("\n");

    for (int i = 0; i<n; i++){
        //inicializando o vetor A com zero para todos os numeros
        A[i] = 0;
        for(int j = 0; j<TAM; j++){
            //Comparando se o valor do vetor de aleatorios eh o mesmo que
            //o indice do vetor A
            if(vet[j] == i+1){
            //Acrescenta mais uma ocorrencia para o numero 
            A[i] = A[i]+1; 
            }
        }
    }

    imprime(A, n);
   
    return 0;
}