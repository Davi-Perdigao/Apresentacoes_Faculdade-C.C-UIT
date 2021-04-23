/*
    Elabore um programa que contenha uma fun��o que permita passar por 
    par�metro dois n�meros inteiros A e B. A fun��o deve calcular a soma 
    entre estes dois n�meros e armazenar o resultado na vari�vel. A e a multiplica��o
    de entre eles na vari�vel B. O resultado deve ser impresso na fun��o principal. 
    Vale ressaltar que essa fun��o n�o deve retornar nenhum valor.
*/

#include<stdlib.h>
#include<stdio.h>

void changeValue(int *A, int *B){
    *A += *B;
    *B *= (*A - *B);
}

int main(){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    changeValue(&A, &B);

    printf("A + B = %d\nA x B = %d\n\n", A, B);

    system("pause");
    return 0; 
}
