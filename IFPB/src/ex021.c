/* 
    21. Escreva um programa que leia o preço de produção de um determinado produto e a 
    margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de 
    venda.  
*/
#include <stdio.h>
 
int main()
{
    
    printf("<<< exe021 >>>\n\n");

    float preco_producao,margem_lucro;

    printf("Informe o preco do produto: R$");
    scanf("%f",&preco_producao);
    printf("Informe a margem de lucro desejada: %%");
    scanf("%f",&margem_lucro);

    float preco_final = preco_producao+(preco_producao*margem_lucro/100);

    printf("Preco do produto: R$%.2f\nMargem de lucro desejada: %%%.0f\nPre�o de venda do produto: R$%.2f.",preco_producao,margem_lucro,preco_final);
    return 0;


}
