#include <stdio.h>

int main(){
    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float result = (a*a*a)*((b+c)/d+e);

    printf("a = %.0f, b =  %.0f, c = %.0f, d = %.0f, e = %.0f\n", a,b,c,d,e);
    printf("x = %.0f\n", result);

    return 0;
}