/* 
    44. Escreva um programa que leia individualmente os valores dos quatro dígitos de um 
    valor em binário e calcule o seu valor correspondente em decimal.  
*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("<<< exe044 >>>\n\n");
    int b1,b2,b3,b4,decimal,a;
    printf("Informe o primeiro  binario: [0/1] ");
    scanf("%d",&b1);
    printf("Informe o segundo binario: [0/1] ");
    scanf("%d",&b2);
    printf("Informe o terceiro binario: [0/1] ");
    scanf("%d",&b3);
    printf("Informe o quarto  binario: [0/1] ");
    scanf("%d",&b4);

    decimal = (pow(2,0)*b1) + (pow(2,1)*b2) + (pow(2,2)*b3) + (pow(2,3)*b4);

    printf("\n%d %d %d %d <---> %d",b4,b3,b2,b1,decimal);
    return 0;
}
