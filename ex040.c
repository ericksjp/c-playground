/* 
    40. Escreva um programa que leia o valor total que um cliente consumiu em um 
    restaurante e determine o valor final da sua conta, considerando que o restaurante 
    cobra uma taxa de serviço de 10 %  e uma taxa de couvert artístico de R$ 10,00.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe040 >>>\n\n");
    float valor,juros,valor_final;
    printf("Informe o valor gasto: R$");
    scanf("%f",&valor);

    juros = valor*10/100;
    valor_final=valor+juros+10;

    printf("Valor final: R$%.2f\n",valor_final);

    printf("*Incluido no valor final: %%10 de taxa de servico (R$%.2f) + Couvert artistico (R$10.00)",juros);
    return 0;
}
