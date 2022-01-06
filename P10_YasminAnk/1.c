//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>

struct Racional{
    int numerador;
    int denominador;
};

void mmc(struct Racional *r1){
    while(r1->numerador%10 == 0 && r1->denominador%10==0){
        r1->numerador = r1->numerador/10;
        r1->denominador = r1->denominador/10;
    }
    while(r1->numerador%5 == 0 && r1->denominador%5 == 0){
        r1->numerador = r1->numerador/5;
        r1->denominador = r1->denominador/5;
    }
    while(r1->numerador%3 == 0 && r1->denominador%3 == 0){
        r1->numerador = r1->numerador/3;
        r1->denominador = r1->denominador/3;
    }
    while(r1->numerador%2 == 0 && r1->denominador%2 == 0){
        r1->numerador = r1->numerador/2;
        r1->denominador = r1->denominador/2;
    }
}

int equal(struct Racional r1, struct Racional r2){
   if(r1.denominador == r2.denominador && r2.numerador==r1.numerador){
       return 1;
   }else{
       return 0;
   }
}

int main(){
    struct Racional r1, r2;
    printf("Digite o numerador e denominador de r1: ");
    scanf("%d %d", &r1.numerador, &r1.denominador);

    printf("Digite o numerador e denominador de r2: ");
    scanf("%d %d", &r2.numerador, &r2.denominador);

    mmc(&r1);
    mmc(&r2);

    if(equal(r1, r2) == 1){
        printf("r1 e r2 são iguais!\n");
    }else{
        printf("r1 e r2 são diferentes!\n");
    }

    return 0;
}