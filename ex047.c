/* 
    47. Um banco  está realizando uma grande promoção em seus financiamentos. Ele financia 
    qualquer valor em 5 prest ações. O valor da primeira prestação corresponde à 20% do 
    valor do empréstimo. Os valores das demais prestações correspondem ao valor da 
    parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações, 
    escreva um programa que leia o valo r a ser  financiado por um cliente e calcule: o valor 
    de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de 
    juros que o cliente vai pagar pelo empréstimo.  
*/
#include <stdio.h>
#include<locale.h>

int main()
{
    
    printf("<<< exe047 >>>\n\n");
    float valor,parcelas,v_pago,valor_parcelas;
    printf("Informe o valor do emprestimo: R$");
    scanf("%f",&valor);

    float parcela1=(valor*20/100);
    float parcela2=parcela1+(parcela1*7/100);
    float parcela3=parcela2+(parcela2*7/100);
    float parcela4=parcela3+(parcela3*7/100);
    float parcela5=parcela4+(parcela4*7/100);

    float valor_total = parcela1+parcela2+parcela3+parcela4+parcela5;
    float juros = valor_total-valor;

    printf("Valor da 1ra parcela: R$%.2f\n",parcela1);
    printf("Valor da 2ra parcela: R$%.2f\n",parcela2);
    printf("Valor da 3ra parcela: R$%.2f\n",parcela3);
    printf("Valor da 4ra parcela: R$%.2f\n",parcela4);
    printf("Valor da 5ra parcela: R$%.2f\n\n",parcela5);
    printf("Valor total a ser pago: R$%.2f\n",valor_total);
    printf("Valor total dos juros:  R$%.2f",juros);

    return 0;
}
