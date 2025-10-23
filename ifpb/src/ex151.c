/* 
    151. Escreva um programa que leia o valor de uma precisão desejada pelo usuário e  
    calcul e o valor de Pi com e sta pre cisão. A aproxima ção é calculada através da equação 
    Pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ..., e assim sucessivamente. O processamento 
    deve ser encerrado quando a varia ção entre os dois últimos valores calculados  for 
    inferior à precisão desejada p elo usu ário (Por exemplo 0.0001 ).  
*/
#include <stdio.h>

int main()
{
    int p1=3;
    int p2=5;
    float aa=10;
    float precisao;

    printf("Informe a precisao desejada -> ");
    scanf("%f",&precisao);

    int c=0;
    while(aa>=precisao){
        aa = 4.0/p1 + 4.0/p2;
        p1+=2;
        p2+=2;
        c++;
    }

    float resultado = 4-aa;

    printf("\nPrecisao alcancada -> %f\n\n",aa);

    printf("4 - (4/%d + 4/%d) = %f\n",p1,p2,resultado);
    return 0;

}
