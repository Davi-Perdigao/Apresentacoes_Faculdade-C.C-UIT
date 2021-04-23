/*
    Fa�a um programa para receber uma rela��o de n�meros inteiros definida 
    pelo usu�rio.Verifique a quantidade de n�meros pares e �mpares informados
    pelo usu�rio.
*/

#include<stdio.h>
#include<stdlib.h>

bool isPar(int num){
    if(num%2==1) return false;
    return true;
}

int main () {
    int num, *pN, quant, par = 0, impar = 0;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", quant);

    pN = (int *)malloc(quant*sizeof(int));

    if (!pN){
        printf ("** Erro: Memoria Insuficiente **");
        exit(0);
    }
    for(int i=0; i<quant; i++){
        printf("Digite um numero: ");
        scanf("%d", &pN[i]);
        isPar(*(pN + i)) ? par++ : impar++;
    }

    printf("Total: %d pares e %d impares", par, impar);

    system("pause");
    return 0;
}
