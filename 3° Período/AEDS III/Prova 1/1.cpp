#include <stdio.h> //Quest�o 1 - Prova AEDS III
#include <stdlib.h>
#include <locale.h>
#define TAM5

void addAluno(int ciu[], int tam);
void sequencial(int ciu[], int tam, int chave);

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int opcao,chave, tam, codigo[tam]; //Declarando vari�veis 
	do{
		printf ("\n\t\tCADASTRO DE ALUNOS UIT:\n"); //Elabora��o de um "MENU"
		printf("\n\tSelecione uma das seguintes op��es:\n\n");
		printf("\t1- Incluir novo aluno;\n");
		printf("\t2- Buscar aluno;\n");
		printf("\t3- Finalizar.\n");
		scanf("%d",&opcao);
		if(opcao==1) //Caso selecione a op��o 1, escolher quantos alunos ser�o adicionados, e aloca-los em "tam"
		{
			printf("\nInforme quantos alunos ser�o cadastrados: ");
			scanf("%d",&tam);
			addAluno(codigo,tam);
		}
		if(opcao==2) //Caso selecione a op��o 2, informar matricula do aluno, essa ser� a "chave"
		{
			printf("\nInforme a matr�cula (CIU): ");
			scanf("%d",&chave);
			sequencial(codigo,tam,chave);		
		}
	} while(opcao!=3); //Caso escolha a op��o 3, o programa finaliza
	
	system("pause");
	return 0; }
	
void addAluno(int codigo[], int tam) { //Para adicionar um aluno e aloca-lo em "codigo"
	printf("\n");
	for(int i=0;i<tam;i++)
		{
			printf("\tInforme a matricula (CIU): ");
			scanf("%d",&codigo[i]);
		}
}
void sequencial(int codigo[], int tam, int chave) { //Pesquisa sequencial para buscar um aluno
	int pos=0,i;
	for(i=0;i<tam;i++) {
		pos++;
		if(codigo[i]==chave)
		{
			printf("\n\tAluno encontrado com sucesso.");
			printf("\n\tOrdem: %i.",pos);
			i=tam;
		}
		else if(tam-1==i) //Caso a pesquisa n�o apresente resultado
			{
				printf("\n\tAluno n�o encontrado, cadastre a matr�cula (CIU) e efetua novamente a pesquisa.");
			}
		printf("\n\n\n");
	}
}
