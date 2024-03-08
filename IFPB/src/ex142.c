/* 
    142. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele 
    financia qualquer valor em até 240 prestações. O valor d a prime ira prestação 
    corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores 
    das demais prestações correspondem ao valor da parcela anterior acrescido de uma 
    taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado  por um  
    cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o 
    valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser 
    pago e o valor financiado .  
*/
#include <stdio.h>

int main()
{
    float valor;
    int parcelas;
    printf("Informe o valor a ser financiado -> R$");
    scanf("%f",&valor);
    printf("Informe a quantidade de parcelas desejadas -> ");
    scanf("%d",&parcelas);

    float prestacao1 = valor/parcelas;
    float prestacoes = prestacao1 + (prestacao1*7/100);

    printf("\nValor da 1 prestacao -> R$%.2f\n",prestacao1);
    int cont=2;
    while (cont<=parcelas){
        printf("Valor da %d prestacao -> R$%.2f\n",cont,prestacoes);
        prestacoes+=(prestacoes*7/100);
        cont++;
    }

    float total = 0;

    if (parcelas<2) {total = valor;}
    else {total = valor + prestacoes;}

    float diferenca = total-valor;

    printf("\nValor total a ser pago -> R$%.2f\n",total);
    printf("\nVoce pagara R$%.2f de juros.\n",diferenca);
    return 0;
}
