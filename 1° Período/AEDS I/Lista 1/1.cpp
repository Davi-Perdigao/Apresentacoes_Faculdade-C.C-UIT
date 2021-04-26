/*
Um problema t�pico em ci�ncia da computa��o consiste em converter um n�mero da sua forma decimal
para a forma bin�ria. Por exemplo, o n�mero 12 tem a sua representa��o bin�ria igual a 1100. A forma mais
simples de fazer isso � dividir o n�mero sucessivamente por 2, onde o resto da i-�sima divis�o vai ser o d�gito
i do n�mero bin�rio (da direita para a esquerda). Por exemplo: 12 / 2 = 6, resto 0 (1� d�gito da direita para
esquerda), 6 / 2 = 3, resto 0 (2� d�gito da direita para esquerda), 3 / 2 = 1 resto 1 (3� d�gito da direita para
esquerda), 1 / 2 = 0 resto 1 (4� d�gito da direita para esquerda). Resultado: 12 = 1100
*/

#include <stdlib.h>
#include <stdio.h>
#include <stack>
using namespace std;


void binario(int dec){
    int bin[50], i = 0;
    while(dec > 0){
        bin[i] = dec%2;
        i++;
        dec/=2;
    }
    
    for(i-=1 ; i>=0 ; i--){
        printf("%d", bin[i]);
    }
}


int main(){
    int decimal = 5;

    printf("Digite o decimal: ");
    scanf("%d", &decimal);

    printf("%d em binario e: ", decimal);
    binario(decimal);

    printf("\n");
    system("pause");
    return 0;
}
