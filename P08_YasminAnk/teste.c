#include<stdio.h>



int main(){
	char palavra[50];
	printf("agbgzjus: ");
	fgets(palavra, 49, stdin);
	printf("%s\n", palavra);
	int i = 0;
	while(palavra[i]!='\n'){
		i++;
	}
	printf("%d\n", i);
	int cont = 0, cont2 = 0;
	for (int a = 0; a<=i; a++){
		if((int) palavra[a] > 65 && (int)palavra[a] < 90){
			cont = 0;
		}
		if((int) palavra[a] > 97 && (int)palavra[a] < 122){
			cont++;
		}
	}

	printf("%d\n", cont);
}