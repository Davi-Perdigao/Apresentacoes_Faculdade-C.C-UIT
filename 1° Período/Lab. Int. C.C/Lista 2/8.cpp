/*
    Receba n�meros digitados pelo usu�rios e armazene em um vetor de tamanho 10. Caso ele digite um n�mero negativo, pe�a para digitar novamente. Ao final diga a quantidade de n�meros pares e a quantidade de n�meros �mpares.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int num[10], i, par, impar;

   for(i=0;i<10;i++){
       do{
           printf("Digite o %do numero: ",i+1);
           scanf("%d", &num[i]);
       }while(num[i] < 0);
       printf("\n");
   }

   for(i=0;i<10;i++){
       if(num[i]%2==0){
           par++;
       }
       else{
           impar++;
       }
   }

    printf("Total de: %d numeros pares e %d impares.", par, impar);

   printf("\n\n");
   system("pause");
   return 0;   
}
