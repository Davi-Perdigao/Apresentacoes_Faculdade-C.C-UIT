/*
    Fa�a um programa que receba um n�mero inteiro do usu�rio e calcule seu fatorial
*/

#include<stdlib.h>
#include<Stdio.h>

// Fun��o para calcular fatorial
int fatorial(int x){
    int num = 1;
    for(int i = x;i>0;i--){
        num = num * i;
    }

    return num;
}

int main(){
    int num;

    printf("Digite o numero para fatorar: ");
    scanf("%d", &num);
    
    printf("\n\t%d! = %d", num, fatorial(num));

    printf("\n\n");
    system("pause");
    return 0;
}
