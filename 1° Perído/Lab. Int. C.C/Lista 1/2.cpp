/*
    Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa dever� informar se os valores podem ser um tri�ngulo. Indique, caso os lados formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou escaleno.
    - Dicas:
    - Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados for maior que o terceiro;
    - Tri�ngulo Equil�tero: tr�s lados iguais;
    - Tri�ngulo Is�sceles: quaisquer dois lados iguais;
    - Tri�ngulo Escaleno: tr�s lados diferentes;
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int A, B, C;

    printf("Digite o lado A: ");
    scanf("%i", &A);
    printf("Digite o lado B: ");
    scanf("%i", &B);
    printf("Digite o lado C: ");
    scanf("%i", &C);
    printf("\n");

    if(A + B > C && A + B > B && B + C > A){ //verifica se � um tri�ngulo
        if(A == B && A == C){ // Verifica se � equilatero
            printf("Triangulo Equilatero");
        }
        else if(A != B && A != B && B != C){ //verifica se � esclaeno
            printf("Triangulo Escaleno");
        }

        else { //tri�ngulo escaleno
            printf("Triangulo Isoseles");
        }
    }

    else{
        printf("Nao e um triangulo");
    }

    printf("\n\n");
    system("pause");
    return 0;
}
