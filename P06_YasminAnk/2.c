// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

int validaCPF(long cpf){
    
    int cont = 10; //sequencia de numeros a serem multiplicados pelo digito
    long z = 100000000; //numero que vai selecionar quantos digitos pegar
    long x = cpf/100; // x passa a ser apenas os 9 primeiros digitos
    long r = 0; // onde ficara o resultado da soma dos digitos multiplicados
    long d1 = cpf/10-(x*10); //armazenando o primeiro digito verificador

    //separando os digitos e operando com eles separados
    do{
        long y = x/z; //pegando o digito a ser calculado
        r = r + y*cont; //multiplicando-o pelos numeros decrescentes e somando cada multiplicacao
        x = x-y*z; //atualizando x, tirando dele o digito que ja foi calculado anteriormente
        z = z/10; // tirando um "0" de z, para fazer a divisao e pegar menos um digito, excluindo o digito que ja foi usado
        cont --; 
    }while(cont>=2);

    if((r*10)%11==d1 || ((r*10)%11==10 && d1==0 )){
        //Primeira parte da validada, agora basta validar o segundo digito
        //da mesma forma, porem com 1 digito a mais

        int cont = 11;
        long z = 1000000000; //como aumentamos mais um numero, z aumenta uma dezena
        long x = cpf/10; //agora precisamos dos 10 primeiro digitos, entao dividimos o cpf por 10 para excuir o ultimo
        long r = 0;
        long d2 = cpf-(x*10); //ultimo digito, que sera verificado
        
        //separando agora os 10 digitos e operando com eles separados
        do{
            long y = x/z;
            r = r + y*cont;
            x = x-y*z;
            z = z/10;
            cont --;
        }while(cont>=2);
        if((r*10)%11==d2 || ((r*10)%11==10 && d2==0 )){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int main(){
    printf("Digite o cpf: ");
    long cpf;
    scanf("%ld", &cpf);
    if(validaCPF(cpf)==1){
        printf("CPF valido.\n");
    }else{
        printf("CPF invalido.\n");
    }
    return 0;
}