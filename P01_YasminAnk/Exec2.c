// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <math.h>

int main(){
    int ano;

    printf("Digite o ano para saber se eh bissexto: ");
    scanf("%i", &ano);

    if(ano%4 == 0 && ano%100 != 0){
        printf("O ano digitado é bissexto!\n");
    }else if (ano%100 == 0 && ano%400 == 0){
        printf("O ano digitado é bissexto!\n");
    }else{
        printf("O ano digitado não é bissexto!\n");
    };


}