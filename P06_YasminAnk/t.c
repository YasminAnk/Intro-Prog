
// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

int main(){
    int linhaAtual_bispo, coluna_bispo;
    printf("Movimentos de um Bispo no xadrez!\nDigite a linhaAtual_bispo em que o Bispo se enlinhaAtualra: ");
    scanf("%d", &linhaAtual_bispo);
    printf("Digite a coluna_bispo em que o Bispo se enlinhaAtualra: ");
    scanf("%d", &coluna_bispo);

    printf("      1  2  3  4  5  6  7  8\n");
    printf("    --------------------------\n");

    int linhaAtual = 1;
    int colunaAtual = 1;

    do{
        printf(" %d | ", linhaAtual);
        do{
            if(colunaAtual == coluna_bispo && linhaAtual ==linhaAtual_bispo){
                printf(" o ");
            }
            else{
                int distanciaLinha = linhaAtual_bispo - linhaAtual;
                int distanciaColuna = coluna_bispo - colunaAtual;
                if(distanciaLinha == distanciaColuna || distanciaLinha == -distanciaColuna || distanciaColuna == -distanciaLinha){
                    printf(" x ");
                }else{
                    printf(" - ");
                }
            }
            colunaAtual++;
            
        }while(colunaAtual<=8);
        printf("\n");
        colunaAtual = 1;
        linhaAtual ++;
    }while(linhaAtual<=8);
}