//Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
//turma 41

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    double nota;
    int frequencia;
}Aluno;

double Freq(Aluno alunos[50],int n){
	double media = 0;
	for (int  i = 0; i < n; i++)
	{
		media =media + alunos[i].frequencia / 100;
	}
	media = media*100.;
	return media;
}

int aprovados(Aluno alunos[50],int n){
	int cont = 0;
	for (int  i = 0; i < n; i++){
		if (alunos[i].nota >=60){
			cont++;
		}
	}
	return cont;
}

void gravar_registro( FILE * pf, char * nome, double nota, int frequencia )
{
    Aluno a;

    strcpy( a.nome, nome );
    a.nota = nota;
    a.frequencia = frequencia;

    fwrite( &a, sizeof(Aluno), 1, pf );
}

int main (){
    printf("Digite o nome do arquivo: ");
    char arq [50];
    scanf("%s",arq);
    FILE *arquivo = fopen(arq,"r");
    FILE *file = fopen("alunos.dat", "wb");
    Aluno vetor [50];
    int i = 0;
    double soma = 0.0;
    while((fscanf(arquivo, "%s %lf %d\n", vetor[i].nome, &vetor[i].nota, &vetor[i].frequencia))!= EOF){
        soma+=vetor[i].nota;
        i++;
        gravar_registro(file, vetor[i].nome, vetor[i].nota, vetor[i].frequencia);
    }
	if(file!=NULL){
		printf("Arquivo alunos.dat criado com sucesso!\n");
	}else{
		printf("Erro ao criar arquivo alunos.dat\n");
	}

	double ap = aprovados(vetor,i);
    double freq = Freq(vetor, i);
    printf("Nota media : %.2lf\n",(soma/i));
	printf("Frequencia media :  %.1lf%%\n",freq);
	printf("Percentual de aprovacao :  %.1lf%%\n",(ap*100)/i);
	printf("Nomes dos alunos com nota acima da nota media:\n");
    
    for ( int j = 0; j < i-1; j++)
	{
		if (vetor[j].nota>soma/i)
		{
			printf("%s\n",vetor[j].nome);
		}
	}

	return 0 ;
    
}