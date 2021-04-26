/*
    Fa�a um programa de entrevista de emprego que pega o sexo, idade e forma��o escolar (1 para fundamental, 2 para m�dio e 3 para superior) e determina o cargo a que a pessoa pode se candidatar, de acordo com a tabela: 
            Sexo    Idade   Escolaridade    Cargo
            F       >25     m�dio           Recepcionista
            M       >40     fundamental     Servente
            F ou M  <30     Superior        Auxiliar de RH
    Com qualquer outra op��o deve-se imprimir "n�o h� posi��o dispon�vel". Ao final de cada entrevista deve-se perguntar se o  usu�rio ainda deseja continuar, caso a resposta seja N o
programa deve finalizar
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    
    char sexo, resp;
    int idade, esc;
    
    // La�o continuo ate a interrup��o do usu�rio
    do {
        system("cls");
        
        //entrada de dados
        printf("Qual seu sexo [F - Feminino / M - Masculino]\nR.: ");
        scanf("%s", &sexo);

        printf("Qual sua idade: ");
        scanf("%d", &idade);

        printf("Qual sua escolaridade\n\t1 - Ensino Fundamental\n\t2 - Ensino M�dio\n\t3 - Ensino Superior\nR.: ");
        scanf("%d", &esc);

        // Verifica��o condicional por vaga
        if (sexo == 'f' && idade >= 25 && esc == 2){
            printf("\nVaga Dispon�vel: Recepcionista");
        }

        else if (sexo == 'm' && idade >= 40 && esc == 1){
            printf("\nVaga Dispon�vel: Servente");
        }

        else if (idade <= 30 && esc == 3){
            printf("\nVaga Dispon�vel: Auxiliar de RH");
        }

        else {
            printf("N�o h� posi��o dispon�vel");
        }

        // Verifica se o usu�rio quer continuar o la�o
        printf("\n\nDeseja continuar? [s - sim / n - n�o]: ");
        scanf("%s", &resp);


    } while (resp == 's');

    printf("\n\n");
    system("pause");
    return 0;
}
