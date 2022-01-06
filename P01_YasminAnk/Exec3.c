// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Digite os 3 numeros:\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if(n1<n2 && n1<n3){
        printf("Menor: %i\n", n1);
        if(n2<n3){
            printf("Intermediario: %i\n", n2);
            printf("Maior: %i\n", n3);
        }else{
            printf("Intermediario: %i\n", n3);
            printf("Maior: %i\n", n2);
        }
    }
    
    if(n2<n1 && n2<n3){
        printf("Menor: %i\n", n2);
        if(n1<n3){
            printf("Intermediario: %i\n", n1);
            printf("Maior: %i\n", n3);
        }else{
            printf("Intermediario: %i\n", n3);
            printf("Maior: %i\n", n1);
        }
    }

    if(n3<n1 && n3<n2){
        printf("Menor: %i\n", n3);
        if(n1<n2){
            printf("Intermediario: %i\n", n1);
            printf("Maior: %i\n", n2);
        }else{
            printf("Intermediario: %i\n", n2);
            printf("Maior: %i\n", n1);
        }
    }

    else if(n1==n2 && n1==n3){
        printf("Todos os números são iguais!\n");
    }
        
}