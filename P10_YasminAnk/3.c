//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>

typedef struct{
    char nome[50];
    double nota;
    int frequencia;
}Aluno;

int main(){
    FILE *arquivo = fopen("alunos.txt", "w");
    int n; 
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno vet [n];

    for(int i = 0; i < n; i++){
        printf("Nome do aluno: ");
        scanf("%s", vet[i].nome);
        printf("Nota: ");
        scanf("%lf", &vet[i].nota);
        printf("Frequência: ");
        scanf("%d", &vet[i].frequencia);
        fprintf(arquivo, "%s %.2lf %d\n", vet[i].nome, vet[i].nota, vet[i].frequencia );
    }

    fclose(arquivo);
    printf("Nome do aluno:%s ", vet[0].nome);


}