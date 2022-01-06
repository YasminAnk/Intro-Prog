// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#define TAM 30

//funcao que calcula a media e retorna quantos dias foram acima da media e quantos foram abaixo
void CalculaMedia(double vetor[], int tamanho, double soma){
    double media = soma/tamanho;
    int acima = 0, abaixo = 0;
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]>media){
            acima++;
        }else if(vetor[i]<media){
            abaixo++;
        }
    }
    printf("Houveram %d dias acima da media e %d dias abaixo da media\n", acima, abaixo);
}

int main(){
    double vet[TAM], soma = 0.0;
    for(int i = 0; i <TAM; i++){
        printf("Digite a temperatura do %d° dia: ", i+1);
        scanf("%lf", &vet[i]);
        soma+=vet[i];
    }
    CalculaMedia(vet, TAM, soma);
    return 0;
}