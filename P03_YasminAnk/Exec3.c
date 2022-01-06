// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

void Duracao (int hora1, int minuto1, int hora2, int minuto2, int *duracao){
    *duracao = minuto1;
    if(*duracao < 0){
        *duracao = hora1;
    }
}

int main(){
    int h1, h2, m1, m2, duracao;

    printf("Digite as horas e minutos do inicio do jogo:\n");
    scanf("%d %d", &h1, &m1);

    printf("Digite as horas e minutos do termino do jogo:\n");
    scanf("%d %d", &h2, &m2);


    Duracao(h1,m1,h2,m2, &duracao);
    printf("A duracao do jogo foi de: %d minutos\n", duracao);
    return 0;
    


}



