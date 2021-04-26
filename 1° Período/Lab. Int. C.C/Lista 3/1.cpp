/*
    Criar um algoritmo que carregue uma matriz 12 x 4 com os valores das vendas de uma loja,
em que cada linha represente um m�s do ano, e cada coluna, uma semana do m�s. Para fins
de simplifica��o considere que cada m�s possui somente 4 semanas. Calcule e imprima: -
Total vendido em cada m�s do ano;
Total vendido no ano. Qual a melhor semana para vender carros? 1�, 2�, 3� ou 4�?
*/

#include<stdio.h>
#include<stdlib.h>

// Fun��o para somar toda a matriz (ano)
int somaAno(int x[12][4]){
    int soma = 0, i, j;
    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            soma += x[i][j];
        }
    }
    return soma;
}

// Fun��o para somar cada linha(mes) e armazena no vetor
void somaMes(int x[12][4], int somaMes[12]){
    int i, j;
    for(int i=0; i<12; i++){
        somaMes[i] = 0;
        for(int j=0; j<4; j++){
            somaMes[i] += x[i][j];
        }
    }
}

/* Fun��o para verificar qual foi a melhor semana de vendas
Quando a maior semana de vendas do m�s � encontrada,(vari�vel semana), a vari�vel 'aux'
armazena essa posi��o, que � a semana desse m�s. Logo em seguida essa posi��o � somada
em outra vari�vel 'melhorSem' que � feita para calcular a m�dia no final do c�digo*/

int melhorSemana(int x[12][4]){
    int semana, i, j, aux, melhorSem = 0;
    for(i=0; i<12; i++){
        semana = x[i][0];
        for(j=0; j<4; j++){
            if(semana <= x[i][j]){
                semana = x[i][j];
                aux = j+1;
            }
        }
        melhorSem += aux;
    }
    
    return melhorSem/12;
}

int main(){
    int i, j, vendas[12][4], vendasMensais[12];

    // Recebe a matriz
    for(i=0; i<12; i++){
        for(j=0; j<4; j++){
            printf("%do mes, %do semana: ", i+1, j+1);
            scanf("%d", &vendas[i][j]);
        }
        printf("\n");
    }
    // Exibe a matriz
    for(i=0; i<12; i++){
        for(j=0; j<4; j++){
            printf(" %d ", vendas[i][j]);
        }
        printf("\n");
    }
    // Modifica o vetor de vendas mensais
    somaMes(vendas, vendasMensais);

    // Apresenta os dados
    printf("\n\tRelatorio anual\n\nVendas de cada mes:");
    for(i=0; i<12; i++) printf("\n%d mes: %d",i+1, vendasMensais[i]);

    printf("\n\nVenda total do ano: %d\n\nA melhor semana de vendas foi a %da\n\n", somaAno(vendas), melhorSemana(vendas));

    system("pause");
    return 0;
}
