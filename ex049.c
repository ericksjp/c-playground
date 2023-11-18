/*
    49. Uma revende dora  de veículos resolveu fazer uma promoção em seus veículos. Nesta 
    revendedora, o preço de um veículo é calculado através do seu preço de compra, mais 
    uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta 
    promoção, a revendedora resolve u tirar  o valor do IPI. Com base nestas informações, 
    escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o 
    seu preço na promoção.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe049 >>>\n\n");
    float valor,promocao;

    printf("Informe o preco atual do veiculo: R$");
    scanf("%f",&valor);

    promocao = valor + (valor*17/100);
    promocao = promocao + (promocao*20/100);
    printf("Preco sugerido para a venda do veiculo: R$%.2f",promocao);
    return 0;
}
