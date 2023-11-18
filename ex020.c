/* 
    20. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00. 
    Escreva um program a qu e leia o comprimento e a largura de um terreno localizado 
    nesta cidade e calcule o seu valor  de mercado . 
*/
#include <stdio.h>

int main()
{
    
    printf("<<< exe020 >>>\n\n");

    float comprimento, largura;

    printf("Informe o comprimento do terreno em metros: ");
    scanf("%f",&comprimento);
    printf("Informe a largura do terreno em metros: ");
    scanf("%f",&largura);

    int valor_mercado = (comprimento*largura)*300;
    printf("Valor de mercado do terreno R$%d,00.",valor_mercado);
    return 0;

}
