// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <math.h>

//funcao que retorna [pi]
double Pi (int termos){
    double s = 1.;
    int sinal = 0;
    int cont = 3;
    do{
        if(sinal == 0){
            sinal = 1;
            s = s - (1/pow(cont, 3));
        }else{
            sinal = 0;
            s = s + (1/pow(cont, 3));
        }
        cont = cont + 2;
        termos --;
    }while (termos>0);
    return cbrt(s*32);
}

int main(){
    int termos;
    printf("Digite o numero de termos para o calculo de pi: ");
    scanf("%d", &termos);
    double pi = Pi(termos);
    printf("O valor de pi é %lf\n", pi);
    return 0;
}