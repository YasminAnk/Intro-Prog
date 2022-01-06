// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("Esta letra é uma vogal minúscula!\n");
    }else if ( letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("Esta letra é uma vogal maiúscula!\n");
    }else{
        printf("Esta letra não é uma vogal!\n");
    };


}

