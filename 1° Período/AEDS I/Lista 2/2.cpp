#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int x=100,*p,**pp; // Declarndo vari�veis: X, P(Ponteiro do X), PP (Ponteiro do Ponteiro do X)
	p=&x; //Ponteiro acessando X em seu local de mem�ria  p=100
	pp=&p; //Ponteiro do Ponteiro acessando o Ponteiro em seu local de mem�ria  pp=100
	printf ("Valor de pp: %d\n", **pp); //Exibindo o valor do Ponteiro  do Ponteiro de X, 
	//														(100)
	
}
