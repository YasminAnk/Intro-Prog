//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>
#include <stdlib.h>

int multiplica_matrizes (int *** R, int ** A, int n, int m, int ** B, int p, int q){
    if(m == p){
        int result = 0;
        *R = malloc(n * sizeof(int*));
        for(int i = 0; i < n; i++){
            (*R)[i] = malloc(q * sizeof(int));
            for(int j = 0; j < q; j++){
                for(int k = 0; k < p; k++){
                    result += A[i][k] * B[k][j];
                }
                (*R)[i][j] = result;
                result = 0;
            }  
        }
        return 1;
    }else{
        return 0;
    }
}

void leMatriz(int ** A, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            scanf("%d", &A[i][j]);
        }
    }
}

int ** criaMatriz(int m, int n){
    int **mat = malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++){
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
    int ** R, ** a, ** b, m, n, p, q;
    printf("Digite os tamanhos da matriz A: ");
    scanf("%d %d", &n, &m);
    a = criaMatriz(n, m);
    printf("Digite os dados da matriz A: ");
    leMatriz(a, n, m);
    printf("Digite os tamanhos da matriz B: ");
    scanf("%d %d", &p, &q);
    b = criaMatriz(p, q);
    printf("Digite os dados da matriz B: ");
    leMatriz(b, p, q);

    int r = multiplica_matrizes(&R, a ,n, m, b, p, q);
    if(r == 0){
        printf("Não foi possivel multiplicar as matrizes!");
    }else{
        printf("Resultado de A x B: \n");
        for(int i = 0; i < n; i++){
            for (int j = 0; j < q; j++){
                printf("%d ", R[i][j]);
            }
            printf("\n");
        }
    }

    liberaMatriz(a, n);
    liberaMatriz(b, p);
    liberaMatriz(R, m);

    return 0;


}