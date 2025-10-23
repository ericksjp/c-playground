/* 
    57. Escreva um pro grama que leia o valor de uma passagem em reais e em milhas e, em 
    seguid a, leia  o valor da passagem (em reais) que Caio deseja comprar e calcule quantas 
    milhas ele precisa juntar para que ele não precise pagar pela passagem. Para resolver este programa, considere que a proporção entre o valor da milha e o valor em reais é a 
    mesma para todos os vôos da companhia aérea.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("<<< exe057 >>>\n\n");
    float valor_milha,valor_real,valor_caio;

    printf("Informe o valor da passagem: R$");
    scanf("%f",&valor_real);
    printf("Informe o valor da passagem em milhas: ");
    scanf("%f",&valor_milha);
    printf("Valor da passagem de Caio: R$");
    scanf("%f",&valor_caio);

    float proporcao = (valor_real/valor_milha);
    float resultado = valor_caio/proporcao;

    printf("Caio precisara de %2.f milhas para pegar a passagem de graca.",resultado);
    return 0;
}
