//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>
#include <stdlib.h>

int verificaQuadrado(int ** A, int n){
    int ref = 0;
    for(int i = 0; i <n; i++){
        ref+=A[i][i];
    }

    int soma = 0;
    for(int i = 0; i <n ;i++){
        soma+= A[i][n-i-1];
    }
    if(soma!=ref){
        return 0;
    }

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j <n; j++){
            soma+= A[i][j];
        }
        if(soma!=ref){
            return 0;
        }
    }

    for(int j = 0; j < n; j++){
        soma = 0;
        for(int i = 0; i <n; i++){
            soma+= A[i][j];
        }
        if(soma!=ref){
            return 0;
        }
    }

    return 1;

}
void leMatriz(int ** A, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            scanf("%d", &A[i][j]);
        }
    }
}

int ** criaMatriz(int n){
    int **mat = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        mat[i] = malloc( n * sizeof(int));
    }
    return mat;
}

void liberaMatriz(int ** A, int m){
     for(int i = 0; i < m; i++){
        free(A[i]);
    }
    free(A);
}


int main(){
    int ** A, n, result;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    A = criaMatriz(n);
    printf("Digite os valores da matriz n x n: ");
    leMatriz(A, n);
    result = verificaQuadrado(A, n);
    if(result == 1){
        printf("Esta matriz é um quadrado mágico!\n");
    }else{
        printf("Esta matris não é um quadrado mágico!\n");
    }
    liberamatriz(A, n);
    return 0;
}