/* 
    277. O Banco do Povo está realizando uma grande promoçã o em seus financiamentos. 
    Ele financia qualquer valor em até 240  prestações. O valor da primeira prestação 
    corresponde a 20% do valor do empréstimo. Os valores das demais prestações 
    correspondem ao valor da parcela anterior acrescido de uma taxa de juros d e 7%. Com 
    base nestas informações, escreva um subprograma recursivo que receba como 
    entrada o valor do empréstimo, o número de parcelas e um número inteiro N entre 1 e 
    240 e calcule qual será o valor da parcela N do empréstimo.  
*/
#include <stdio.h>

float valor_parcela (float total, int prestacoes, int indice_prestacao)
{
    if (indice_prestacao==1){
        return (20.0/100)*total;
    } else {
        float pa = valor_parcela(total,prestacoes,indice_prestacao-1)*(7.0/100);
        return valor_parcela(total,prestacoes,indice_prestacao-1) + (valor_parcela(total,prestacoes,indice_prestacao-1)*(7.0/100));
    }
}

int main ()
{
    float total;
    int prestacoes;
    int parcela_indice;
    printf("Informe o valor do emprestimo -> ");
    scanf("%f",&total);
    printf("\nInforme a quantidade de parcelas que deseja financiar -> ");
    scanf("%d",&prestacoes);
    printf("Informe o numero da parcela que deseja saber o valor --> ");
    scanf("%d",&parcela_indice);
    float valor = valor_parcela(total,prestacoes,parcela_indice);
    printf("\nA %d parcela sera de R$%.2f",parcela_indice,valor);
    return 0;


}
