#include <stdio.h>

int main(){
    double x1, x2, x3, result;
    printf("Usuario, digite o valor de x1, x2 e x3:\n");
    scanf("%lf %lf %lf", &x1, &x2, &x3);

    result = (x1+3) * (x1+3) * (x1+3) * (x1+3) 
    + (x2*x3)*(x2*x3)*(x2*x3);

    printf("O resultado eh: %.0lf\n", result);

    return 0;
}