//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>
#include <stdlib.h>

int contQtd(double media, int *vetor, int tamanho){
    int cont = 0;
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]>=media){
            cont++;
        } 
    }
    return cont;
}

int main(){
    int n, *v1, soma = 0, *v2, *v3, j = 0, k = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    v1 = malloc(n * sizeof(int));
    printf("Digite os valores do vetor: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &v1[i]);
        soma += v1[i];
    }
    double media = soma/n;
    int n1 = contQtd(media, v1, n);
    v2 = malloc( n1 * sizeof(int));
    v3 = malloc( (n - n1) * sizeof(int));
    for(int i = 0; i<n; i++){
        if(media<=v1[i]){
            v2[j] = v1[i];
            j++;
        }else{
            v3[k] = v1[i];
            k++;
        }
    }
    printf("A média é: %.2lf\n", media);
    printf("Vetor com os valores acima da media: [ ");
    for (int i = 0; i < n1; i++){
        printf("%d ", v2[i]);
    }
    printf("]\nVetor com os valores abaixo da media: [ ");
    for (int i = 0; i < n-n1; i++){
        printf("%d ", v3[i]);
    }
    printf("]\n");
    free(v1);
    free(v2);
    free(v3);

    return 0;
}