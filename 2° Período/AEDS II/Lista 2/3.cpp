/*
    Crie uma struct para controlar a��es de uma bolsa de valores com 
    as seguintes informa��es:
        � Nome da companhia
        � �rea de atua��o da companhia
        � Valor atual da a��o (em reais)
    Implemente uma fun��o para
        a) Entrada de dados para 10 empresas;
        b) Listar todas a empresas;
        c) Listar a a��o mais valorizada;
*/

#include<stdlib.h>
#include<stdio.h>

struct bolsa{
    char nome[20];
    char atuacao[30];
    float valor;
} empresas[10];

int main () {
    int i, maior_valorLOC;
    float maior_valor;

    for(i=0 ; i<3 ; i++){
        printf("Empresa %d\n", i+1);
        printf("a) Nome: ");
        scanf(" %s", &empresas[i].nome);
        printf("b) Atuacao: ");
        scanf(" %s", &empresas[i].atuacao);
        printf("c) Valor: ");
        scanf("%f", &empresas[i].valor);

        printf("\n");
    }

    system("cls");

    for(i=0 ; i<3 ; i++){
        printf("\nEmpresa %d\n", i+1);
        printf("\na) Nome: %s", empresas[i].nome);
        printf("\nb) Atuacao: %s", empresas[i].atuacao);
        printf("\nc) Valor: R$%.2f", empresas[i].valor);

        printf("\n");
        maior_valor = empresas[0].valor;
        if(empresas[i].valor > maior_valor) {
            maior_valor = empresas[i].valor;
            maior_valorLOC = i;
        }
    }

    printf("A acao mais valorizada foi da empresa %s, sendo em R$%.2f reais\n\n", empresas[maior_valorLOC].nome, maior_valor);

    system("pause");
    return 0;
}
