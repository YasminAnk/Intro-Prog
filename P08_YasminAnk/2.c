// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    //criando a repetição - executar enquanto não digitar "FIM"
    while(strcmp(palavra, "FIM")!=0){
        printf("Digite uma palavra ou FIM para sair: ");
        fgets(palavra, 49, stdin); //lendo a palavra digitada

        if(strcmp(palavra, "FIM") == 0){
            //finaliza o programa
            return 0;
        }

        char invertida[50]; //String que vai armazenar a palavra de trás para frente
        
        //removendo o "\n" do final da string
        int tam = strlen(palavra); 
        palavra[tam-1]='\0';

        int j = tam-2; //representa o local da ultima letra no vetor de char palavra
        int cont = 0; // contador que armazenará quantas letras da palavra invertida são iguais à palavra original
        
        //Inserindo a palavra de tras para frente no vetor "invertida"
        for(int i = 0; i<tam-1; i++){
            invertida[j] = palavra[i];
            j--;
        }

        //contando quantas letras dos dois vetores coicidem 
        for(int i = 0; i<tam-1;i++){
            if (invertida[i] == palavra[i]){
                cont++;
            }
        }

        if(cont == tam-1){
            //todas as letras daos dois vetores são iguais - Palindromo
            printf("A palavra eh um palindromo\n");
        }else{
            printf("Nao eh um palindromo\n");
        }
    }

    return 0;

}
