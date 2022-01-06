// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <math.h>


int calculaRaizes(double a, double b, double c, double *raiz1, double *raiz2){
    double delta = (b*b) - (4*a*c);
    if(delta >= 0){
        *raiz1 = (-b+sqrt(delta))/2*a;
        *raiz2 = (-b-sqrt(delta))/2*a;
        return 1;
    }else{
        return 0;
    }
}


int main(){
    double a, b, c, r1, r2;
    printf("Digite os valores de a, b e c:\n");
    scanf("%lf %lf %lf", &a, &b , &c);

    if(calculaRaizes(a, b, c, &r1, &r2) ==0){
        printf("Raizes inexistentes\n");
    }else{
        printf("As raizes sao: %lf e %lf\n", r1, r2);
    }

}