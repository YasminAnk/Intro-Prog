#include <stdio.h>
#include <math.h>

#define pi 3.141592

int main(){
    double hipo, alpha;
    printf("Digite os valores da hipotenusa e alpha (em graus):\n");
    scanf("%lf %lf", &hipo, &alpha);

    alpha = alpha*pi/180.0;
    double cat1 = cos(alpha)*hipo;
    double cat2 = sin(alpha)*hipo;

    printf("Os lados do triangulo sao:\n - %lf\n - %lf\n - %lf\n", hipo, cat1, cat2);

    return 0;
}

