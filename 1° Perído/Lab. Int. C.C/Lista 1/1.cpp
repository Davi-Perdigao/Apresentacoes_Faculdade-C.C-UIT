/*
    Fa�a um programa para a leitura de duas notas parciais de um aluno.
    O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
    - A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete e menor que 10;
    - A mensagem "Reprovado", se a m�dia for menor do que sete;
    - A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    float nota1 = 11, nota2 = 11, media = 0;
    
    while (nota1 > 10) { //La�o para repetir para n�o aceitar notas > 10
        printf("Digite sua primeia nota (max. 10): ");
        scanf("%f", &nota1);
    }

    printf("\n");

    while(nota2 > 10){
        printf("Digite sua segunda nota (max. 10): ");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2)/2; //calula a m�dia


    if (media >= 7 && media < 10){ // media maior que 7 e menor que 10
        printf("\nAprovado");
    }

    else if(media < 7){ //media menor que 7
        printf("\nReprovado");
    }

    else{ //media igual a 10
        printf("\nAprovado com Distin��o");
    }

    printf("\n\n");
    system("pause");
    return 0;
}
