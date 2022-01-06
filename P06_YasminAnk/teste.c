// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

int main(){
    long cpf;
    printf("Digite o cpf: ");
    scanf("%ld", &cpf);
    int cont = 10;


    long z = 100000000;
    long x = cpf/100;
    long r = 0;
    long x1 = cpf/10-(x*10);
    printf("%ld\n",x1 );

    do{
        long y = x/z;
        r = r + y*cont;
        x = x-y*z;
        z = z/10;
        cont --;
    }while(cont>=2);

    printf("%ld\n",r );
}