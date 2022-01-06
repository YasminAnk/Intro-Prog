//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>
#include <stdlib.h>

double ** criaTransposta(double **A, int m, int n){
    double **t = malloc(n * sizeof(double*));
    for(int i = 0; i < n; i++){
        t[i] = malloc( m * sizeof(double));
        for(int j = 0; j < m; j++){
            t[i][j] = A[j][i];
        }
    }
    return t;
}

double ** criaMatriz(int m, int n){
    double **mat = malloc(m * sizeof(double*));
    for(int i = 0; i < m; i++){
        mat[i] = malloc( n * sizeof(double));
    }
    return mat;
}

void desaloca_matriz(double **A, int m){
    for(int i = 0; i < m; i++){
        free(A[i]);
    }
    free(A);
}

int main(){
    int m, n;
    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &m, &n);
    double **matriz = criaMatriz(m, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
    double **t = criaTransposta(matriz, m, n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            printf("%.1lf ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            printf("%.1lf ", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    desaloca_matriz(matriz, m);
    desaloca_matriz(t, n);

    return 0;
}