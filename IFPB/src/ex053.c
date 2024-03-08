/* 
    53. Escreva um programa que leia o mês e o ano em que um preso começará a cumprir a 
    sua pena e o ta manho d a pena (em número de anos e número de meses, por exemplo, 18 anos e 5 meses)  e determine o mês e o ano em que ele terminará de cumprir a sua 
    pena. Para resolver esta questão, considere que o ano será sempre maior ou igual a 
    2000.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe053 >>>\n\n");
    int ano,mes,ano_fim,mes_fim,resto,fator;

    printf("Abaixo, informe quando o preso comecara a cumprir sua pena.\n");
    printf("Ano: ");
    scanf("%d",&ano);
    printf("Mes: ");
    scanf("%d",&mes);

    printf("Abaixo, informe quando o preso terminara a cumprir sua pena.\n");
    printf("Ano: ");
    scanf("%d",&ano_fim);
    printf("Mes: ");
    scanf("%d",&mes_fim);

    int pena_mes= mes_fim - mes + (12);
    resto = pena_mes%12;
    fator = pena_mes/12;
    pena_mes = pena_mes - (resto*fator); // se o fator que eh a div da pena mes por 12 der 1,significa que a soma dos meses deu maior que 12
    int pena_ano = ano_fim-ano + (resto*fator);

    printf("A pena do detento sera de %d anos e %d meses.",pena_ano,pena_mes);

}
