/* 
    55. Lázaro está muito feliz por ter enfim conseguido construir a sua casa própria. Sabendo -
    se que a c onstruç ão durou 180 dias de trabalho, escreva um programa que leia o 
    número de pedreiros que trabalhavam na obra, o número de ajudantes e o valor da 
    diária do pedreiro e calcule quanto Lázaro gastou com mão de obra. Para resolver este 
    programa, considere q ue todo s os pedreiros e ajudantes trabalharam todos os dias da 
    obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária 
    do pedreiro.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe055 >>>\n\n");
    int pedreiros,ajudantes;
    float valor;

    printf("Informe quantos pedreiros trabalharam na obra: ");
    scanf("%d",&pedreiros);
    printf("Informe quantos ajudantes trabalharam na obra: ");
    scanf("%d",&ajudantes);
    printf("Informe o preco da diaria do pedreiro considerando que todos os pedreiros tenham uma diaria padrao.\n");
    printf("------------> R$ ");
    scanf("%f",&valor);

    float valor_final=(valor*pedreiros) + (valor*ajudantes/2);

    printf("\nValor final da mao de obra:\n------------> R$%.2f",valor_final);
    return 0;
}
