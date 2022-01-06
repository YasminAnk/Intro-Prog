// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#define TAM 15

int main(){
    int vet[TAM], n;

    //preenchendo o vetor com os valores passados pelo usuario
    for(int i = 0; i<TAM; i++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Agora digite as casas a serem rotacionadas: ");
    scanf("%d", &n);

    int resultado[TAM]; // criando um novo vetor rque sera preenchido rotacionado n casas
    int x = TAM - n; //variavel que nos diz quantas casas serao preenchidas

    //aqui sao preenchidas as primeiras casas do vetor resultado (rotacionado)
    for(int i = 0; i<x ;i++){
        resultado[i] = vet[n];
        n++;
    }

    //preenchendo as casas que restam, com as casas iniciais do primeiro vetor
    for(int i = 0; i< TAM-(TAM-n); i++){
        resultado[x] = vet[i];
        x++;
    }

    //exibindo o vetor rotacionado
    for(int i = 0; i<TAM; i++){
        printf("%d ", resultado[i]);
    }
    printf("\n");
    
    return 0;
}

