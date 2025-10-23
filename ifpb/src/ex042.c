/* 
    42. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu 
    índice de massa corporal.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe042 >>>\n\n");
    float peso,altura,imc;

    printf("Informe sua altura em metros: ");
    scanf("%f",&altura);
    printf("Informe seu peso em Kg: ");
    scanf("%f",&peso);

    imc = peso/(altura*altura);

    printf("Valor do seu IMC: %.2f",imc);
    return 0;
}
