/* 
    52. Um provedor de internet oferece um plano promocional  para os seus clientes. Neste 
    plano, ele paga uma men salidad e de R$ 80,00 e pode acessar até 100 GB de dados.  
    
    Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma 
    taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informações, 
    escreva um programa que leia a  quanti dade de dados acessados pelo cliente durante 
    um mês (em GB) e calcule o valor da sua conta , considerando que esta quantidade 
    nunca é inferior a 100 GB.
*/
#include <stdio.h>

int main()
{
    printf("<<< exe052 >>>\n\n");
    float consumo,valor;

    printf("Informe a quantidade de dados consumida a mais que o plano de 180GB (Gb): ");
    scanf("%f",&consumo);

    valor = ((consumo-100)*5)+80;

    printf("Valor a pagar: R$%.2f",valor);
    return 0;
}
