/*
    Implemente uma struct para receber os dados dos funcion�rios:
        Nome;
        Idade;
        CPF;
        Endere�o.
    E outra struct para receber as informa��es abaixo de cada funcion�rio
        Salario hora;
        Horas trabalhadas por dia;
        N�mero de dias trabalhados no m�s.
    Implemente um programa para que o usu�rio possa informar o n�mero de 
    funcion�rios que deseja cadastrar. Ao final apresente os seguintes resultados.
        a) O nome, CPF, e sal�rio mensal de cada funcion�rio.
        b) O valor total que a empresa ir� precisar para efetuar o pagamento de 
        todos os funcion�rios.
*/

#include <stdlib.h>
#include <stdio.h>

struct Func_info {
    float salario_hora;
    int horas_dia;
    int dias_mes;
};

struct Dados_func {
    char nome[20];
    int idade;
    int cpf;
    char endereco[30];
    Func_info Info;
};

int main () {
    int quantidade, i;
    float total_salario;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidade);

    Dados_func funcionarios[quantidade];

    for(i=0 ; i<quantidade; i++){
        printf("Funcionario %d\n", i+1);
        printf("a) Nome: ");
        scanf(" %s", &funcionarios[i].nome);
        printf("b) Idade: ");
        scanf("%d", &funcionarios[i].idade);
        printf("c) Cpf: ");
        scanf("%d", &funcionarios[i].cpf);
        printf("d) Endereco: ");
        scanf(" %s", &funcionarios[i].endereco);
        printf("e) Salario por hora: ");
        scanf("%f", &funcionarios[i].Info.salario_hora);
        printf("f) Horas diarias: ");
        scanf("%d", &funcionarios[i].Info.horas_dia);
        printf("g) Dias mensais: ");
        scanf("%d", &funcionarios[i].Info.dias_mes);

        total_salario += funcionarios[i].Info.salario_hora * funcionarios[i].Info.horas_dia * funcionarios[i].Info.dias_mes;

        printf("\n");
    }

    for(i=0 ; i<quantidade; i++){
        printf("\nFuncionario %d\n", i+1);
        printf("a) Nome: %s", funcionarios[i].nome);
        printf("\nb) Cpf: %d", funcionarios[i].cpf);
        printf("\nc) Salario por hora: ", funcionarios[i].Info.salario_hora);
        printf("\n");
    }

    printf("\nO total mensal que a empresa deve pagar e R$%.2f\n\n", total_salario);

    system("pause");
    return 0;

}
