//Este é o nosso primeiro programa!

#include <stdio.h>

int main(){
    int x, y, z;
    printf("Digite os valores de x, y, z :");
    scanf("%d %d %d", &x, &y, &z);
    int r = (x*x*x) + (y*y) + (x*y*z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("r = %d\n", r);
    return 0;

}