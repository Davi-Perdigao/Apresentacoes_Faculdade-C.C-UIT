#include <stdio.h>
#include <stdlib.h>

int main()
{
	int quant;
	
	printf("Numero de Funcionarios: ");
	scanf("%i",&quant);
	
	struct funcionario
	{
		char nome[50];
		char endereco;
		int idade;
		int cpf;
	}
	funcionario1[quant];
	
struct infos
{
	float salario;
	int horas;
	int dias;
}
infos1[quant];

	int i;
	float tot;
	
	for (i=0;i<quant;i++)
	{
		scanf("%s", &funcionario1[i].nome);
		scanf("%s", &funcionario1[i].endereco);
		scanf("%i", &funcionario1[i].idade);
		scanf("%i", &funcionario1[i].cpf);
		scanf("%f", &infos1[i].salario);
		scanf("%i", &infos1[i].horas);
		scanf("%i", &infos1[i].dias);
		
		tot = infos1[i].salario*infos1 [i].horas;
	}
	
	for (i=0;i<quant;i++)
	{
		printf("\n\nFUNCIONARIO %i",i+1);
		printf("\nNome: %s",funcionario1 [1].nome);
		printf("\nCPF: %i",funcionario1 [1].cpf);
		printf("\nSalario Mensal: %f",funcionario1 [1].nome);
	}
	printf("\n\nTotal a Pagar: %f",tot);
}
