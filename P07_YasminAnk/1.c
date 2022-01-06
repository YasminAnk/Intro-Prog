// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#define TAM  10

int main(){
    int vet[TAM];

    for(int i = 0; i <TAM; i++){
        if(i-2 >= 0){
            vet[i] = vet[i-1] + vet[i-2];
        }else{
            vet[i] = 1;
        }
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

