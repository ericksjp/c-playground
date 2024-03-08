/* 
    11. Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o 
    valor informado pelo usuário em dólares.  
*/
#include <stdio.h>
int main() {
    printf("<<< exe011 >>>\n\n");

    float real;
    float dolar = 5.06;

    printf("Informe o valor em R$: ");
    scanf("%f",&real);

    float conversao = real/dolar;

    printf("Valor convertido em $: %.2f",conversao);
    return 0;

}
