#include <stdio.h>
int main(){
    printf("escolha a op: ");
    int op;
    scanf("%d", &op);
    switch(op){
        case 0:
        printf("digitou zero");
        break;

        case 1:
        printf("dugutu 1");
        break;

        default:
        printf("defult");
        break;
    }
}