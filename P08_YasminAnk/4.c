// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <string.h>

const char* codifica(char frase[], int tam){
    for(int i = 0; i<tam; i++){
       switch(frase[i]){ //trocando os caracteres
           case 'a':
            frase[i] = '@';
            break;
            case 'e':
            frase[i] = '-';
            break;
            case 'i':
            frase[i] = '|';
            break;
            case 'o':
            frase[i] = '0';
            break;
            case 'u':
            frase[i] = '#';
            break;
            case 's':
            frase[i] = '$';
            break;
       }
    }
    return frase;
}

int main(){
    char frase[500];
    printf("Digite a frase para censurar: ");
    fgets(frase, 499, stdin);
    int tam = strlen(frase);

    char resultado[500] = codifica(frase, tam);

    printf("%s\n", resultado);



}

