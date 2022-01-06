// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <string.h>



int main(){
    char nome[70]; 
    printf("Digite o nome completo: ");
    fgets(nome, 69, stdin);

    //removendo o "\n" do final da string
    int tam = strlen(nome);
    nome[tam-1]='\0';

    int espacos = 1; //inicializando pensando no \0 do final que deverá ser removido ao contar os caracteres
    char ultimonome[70];
    
    //contando a quantidade de espaços para remover da contagem de caracteres
   for(int i = 0; i<tam-1; i++){
       if(nome[i]==' '){
           espacos++;
        }
    }

    int r = espacos, n = 0; 
   for(int i = 0; i<tam-1; i++){
       if(nome[i]==' '){
           r--;
        }
        if(r == 1){ //signfica que a partir daqui começa o ultimo nome
            ultimonome[n] = nome[i+1];
            nome[i+1] = '\0';
            n++;
        }
    }

    printf("%s, ", ultimonome);
    printf("%s", nome);
    printf("\nTotal de letras: %d\n",(tam-espacos));
    printf("Total de letras do ultimo sobrenome: %d\n",n-1);

    return 0;
}