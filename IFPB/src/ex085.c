/* 
    85. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e 
    aplique o operad or lido  aos dois operandos, na ordem em que os mesmos foram 
    digitados.  
*/
#include <stdio.h>


int main()
{
    
    int num1,num2;
    char operador;

    printf("Abaixo, informe dois operandos inteiros e um operador (+ | - | * | /)\n\n");
    printf("Primeiro operando: ");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Operador: ");
    scanf("%c",&operador);
    printf("Segundo operando: ");
    scanf("%d",&num2);

    printf("\n");

    switch (operador)
    {
    case '+':{
        int resultado = num1+num2;
        printf("%d + %d = %d",num1,num2,resultado);
        break;}
    case '-':{
        int resultado = num1-num2;
        printf("%d - %d = %d",num1,num2,resultado);
        break;}
    case '*':{
        int resultado = num1*num2;
        printf("%d * %d = %d",num1,num2,resultado);
        break;}
    case '/':{
        float resultado = (float)num1/num2;
        printf("%d / %d = %.2f",num1,num2,resultado);
        break;}
    default:
        printf("Operador Invalido!");
        break;
    }
}
