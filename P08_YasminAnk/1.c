// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

#define MAX 10

void Ler(int matriz[][MAX], int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("Digite a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void Imprime(int matriz[][MAX], int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[MAX][MAX], B[MAX][MAX];
    int m=0, n=0, p=0, q=0;
    printf("Digite as linhas e colunas da primeira matriz: ");
    scanf("%d",&m);
    scanf("%d",&p);

    printf("Digite as linhas e colunas da segunda matriz: ");
    scanf("%d",&q);
    scanf("%d",&n);

    if(p==q && p<=MAX && n<=MAX && m<=MAX){
        printf("Matriz A: \n");
        Ler(A, m, p);
        printf("\nMatriz B: \n");
        Ler(B, q, n);

        int C[m][n], result = 0;

        //realizando a multiplicação e inserção dos valores na matriz resultado C
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < p; k++){
                    result += A[i][k] * B[k][j];
                }
                C[i][j] = result;
                result = 0;
            }
        }

        Imprime(C, m, n);


    }else{
       //valores de p e q diferentes ou valores maiores que 10 
        printf("As dimensoes devem ser menores ou iguais a 10 e as colunas da primeira devem ser iguais as linhas da segunda matriz\n");
    }

    return 0;
}