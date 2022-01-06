//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>

typedef struct{
    double real;
    double imaginario;
} Complexo;

//funcao que retorna x + y
Complexo somaComplexo(Complexo x, Complexo y){
    Complexo r;
    r.real = (x.real + y.real);
    r.imaginario = (x.imaginario+y.imaginario);
    return r;
}

//funcao que retorna x - y
Complexo subComplexo(Complexo x, Complexo y){
    Complexo r;
    r.real = (x.real - y.real);
    r.imaginario = (x.imaginario - y.imaginario);
    return r;
}

//funcao que retorna x * y
Complexo multComplexo(Complexo x, Complexo y){
    Complexo r;
    r.real = (x.real*y.real)-(y.imaginario*x.imaginario);
    r.imaginario = (x.real*y.imaginario + x.imaginario*y.real);
    return r;
}

int main(){
    Complexo n1, n2, result;
    char op, c;
    printf("Calculadora de números complexos!\n");
    printf("Digite os valores de a e b (x = a + bi): ");
    scanf("%lf %lf", &n1.real, &n1.imaginario);
    printf("Digite os valores de c e d (y = c + d): ");
    scanf("%lf %lf", &n2.real, &n2.imaginario);

    printf("sjnm: ");
    scanf("%c", &c);

    printf("Digite a operação (+, - ou *): ");
    scanf("%c", &op);

    
    switch(op){
        case '+':
        result = somaComplexo(n1, n2);
        break;

        case '-':
        result = subComplexo(n1,n2);
        break;

        case '*':
        result = multComplexo(n1, n2);
        break;
    }
    if(result.imaginario !=0){
        if(result.imaginario>0){
            printf("Resultado: %.1lf + %.1lfi\n", result.real, result.imaginario);
        }else{
            printf("Resultado: %.1lf %.1lfi\n", result.real, result.imaginario);
        }
    }else{
        printf("Resultado: %.1lf\n", result.real);
    }

    return 0;
}
