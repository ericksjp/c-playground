/* 
    45. Escreva um programa que l eia o s dois últimos  valor es da leitura de um medido r de 
    energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1 
    KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de 
    iluminação pública é de R$ 15,00.  
*/
#include <stdio.h>
const float ICMS=17;
const float TAXAIM=15;

int main()
{
    printf("<<< exe045 >>>\n\n");
    float energia1,energia2,valor,icms,valor_final;
    printf("Energia gasta nesse mes (KWh): ");
    scanf("%f",&energia1);
    printf("Energia gasta no mes anterior(KWh): ");
    scanf("%f",&energia2);

    valor = (energia1+energia2)*0.35;
    icms = valor*ICMS/100;
    valor_final = valor+icms+TAXAIM;

    printf("Valor da conta de energia: R$%.2f",valor_final);
    return 0;

}
