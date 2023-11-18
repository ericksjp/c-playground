/*
    43. Escreva um programa que leia o preço atual de uma ação e o seu preço anterior e 
    calcule a sua variação em termos percentuais. Por exemplo, se o  preço atual for R$ 
    10,00 e o preço anterior era R$ 5,00 a variação foi de 100%.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe043 >>>\n\n");
    
    float preco_atual,preco_anterior,variacao;
    printf("Informe o preco atual da acao: R$");
    scanf("%f",&preco_atual);
    printf("Informe o preco anterior da acao: R$");
    scanf("%f",&preco_anterior);

    variacao = (preco_atual-preco_anterior)*100/preco_anterior;

    printf("Variacao: %%%.2f",variacao);
    return 0;
}
