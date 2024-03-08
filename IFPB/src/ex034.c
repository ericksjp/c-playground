/* 
    34. Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o 
    prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses 
    seguintes) em que o cliente deve receber o produto. Para re solver este programa, 
    considere que cada mês tem exatamente 30 dias.  
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("<<< exe034 >>>\n\n");
    int dia,prazo,mes;

    //estrutura com tratamento de dados, nao permitindo o usuario avacalhar geral
    printf("Informe o dia que a compra foi efetuada: ");
    if (scanf("%d",&dia)==0 || dia > 30){
        printf("Erro!");
        exit(0);
    }

    printf("\nInforme o mes que a compra foi efetuada: ");
    if (scanf("%d",&mes)==0 || mes > 12) {
        printf("Erro!");
        exit(0);
    }
    printf("\nInforme o prazo de entrega do vendedor (dias): ");
    scanf("%d",&prazo);

    int fator = (dia+prazo)/30;
    int entrega = (dia+prazo)%30;
    int fator2 = (mes+fator)/13;
    mes = (mes+fator)%13+fator2;

    //se o numero de dias for maior que 30, subtrai 30 e adiciona 1 no mes


    printf("\nSua compra chegara na data: %02d/%02d",entrega,mes);
    return 0;

}
