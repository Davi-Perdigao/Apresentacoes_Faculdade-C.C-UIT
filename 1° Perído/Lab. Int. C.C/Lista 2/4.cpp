/*
    Voc� foi contratado para criar um c�digo que escreva o grande sucesso da m�sica popular brasileira, �creu�. Para isso voc� deve receber do usu�rio a velocidade que ele deseja e escrever a m�sica da velocidade 1 at� a informada, no seguinte formato, caso o usu�rio digite 3, dever� aparecer o c�digo a seguir:
    Velocidade 1 do creu:
    creu
    Velocidade 2 do creu:
    creu creu
    Velocidade 3 do creu:
    creu creu creu
*/

#include<stdlib.h>
#include<stdio.h>

//A l�gica desse programa � a mesma do exerc�cio anterior, tendo como diferen�a somente de uma frase informando a velocidade do creu.

void veloCreu(int x){
    int i, j;

    for (i=1;i<x+1;i++){
        printf("\nVelocidade %d do creu:\n", i);
        for(j=0;j<i;j++){
            printf("creu ");
        }
        printf("\n");
    }
}

int main (){
    int creu;

    printf("Digite a velocidade do creu: ");
    scanf("%d", &creu);

    veloCreu(creu);

    printf("\n\n");
    system("pause");
    return 0;
}
