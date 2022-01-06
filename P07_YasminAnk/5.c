// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

void media(double n1[], double n2[], int tamanho){
    for(int i=0; i<tamanho; i++){
        if((n1[i]+n2[i])/2 >= 60){
            printf("O aluno %d foi aprovado!\n", i+1);
        }else{
            printf("O aluno %d foi reprovado!\n", i+1);
        }
    }
}

int main(){
    double nota1[15], nota2[15];
    for(int i = 0; i<15; i++){
        printf("Digite as notas do aluno %d: ", i+1);
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);
    }
    media(nota1, nota2, 15);

    return 0;
}