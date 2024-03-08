/* 
    48. Uma financeira está oferecendo uma nova modalidade de empréstimo par a os se us 
    clientes. Nesta modalidade, o cliente pode pagar o valor financiado em até 120 
    parcelas, todas as parcelas com o mesmo valor . O valor de cada parcela corresponde 
    ao valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre 
    o valor total financiado. Com base nestas informações, escreva um programa que leia 
    um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o 
    valor de cada parcela  e o valor total que o cliente pagará pelo empréstimo.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe048 >>>\n\n");
    float valor,parcelas,v_pago,valor_parcelas;
    printf("Informe o valor do emprestimo: R$");
    scanf("%f",&valor);
    printf("Informe o numero de parcelas desejadas (max->120): ");
    scanf("%f",&parcelas);

    v_pago = valor + valor*4/100;
    valor_parcelas = v_pago/parcelas;

    printf("\nValor de cada parcela: R$%.2f\n",valor_parcelas);
    printf("Valor total a ser pago: R$%.2f",v_pago);
    return 0;
}
