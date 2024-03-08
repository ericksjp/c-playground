/* 
    32. O carro d e João consegue percorrer em média 14 km  consumindo 1 litro de 
    combustível. Escreva um programa que leia o valor da distância que João vai percorrer 
    durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele 
    deverá gastar com  combus tível durante a viagem.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe032 >>>\n\n");
    float distancia,gasto,combustivelp = 4.8, consumo = 14;

    printf("Informe a distancia a ser percorrida (Km): ");
    scanf("%f",&distancia);

    consumo = distancia/consumo;
    gasto = combustivelp*consumo ;

    printf("Valor a ser gasto com combustivel durante a viajem: R$%.2f",gasto);
    return 0;
}
