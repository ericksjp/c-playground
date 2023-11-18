/* 
    71. Escreva um programa que leia três números inteiros distintos e identifique o maior 
    número lido.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe071 >>>\n\n");
    int num1,num2,num3;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num3);

    int maior=num1;
    if (num2>=num1 && num2>=num3){maior=num2;}
    else if (num3>=num1 && num3>=num2) {maior=num3;}
    printf("\nMaior numero: %d\n",maior);

}

