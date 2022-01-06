
#include <stdio.h>

char letra;
int Consoante (){
  if(letra == 'A' || letra ==  'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
  letra == 'a' || letra == 'e' || letra == 'u' || letra == 'i' || letra == 'o'){
      return 1;
  }
  return 0;
}

int main(){

     printf("Digita uma letra: ");
     scanf("%c", &letra);

    int n = Consoante(); 
    if(n == 1){
        printf("%c é uma vogal!\n", letra);
    }else{
        printf("%c é uma consoante!\n", letra);
    }
}