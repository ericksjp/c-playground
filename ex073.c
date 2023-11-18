/*  
    73. Escreva um programa que leia três números inteiros distintos e identifique o maior e o 
    menor número lido.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe073 >>>\n\n");
    int num1,num2,num3;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num3);

    printf("\n");
    if (num1>=num2 && num1>=num3 && num2>=num3){
        printf("Maior -> %d\nMenor -> %d",num1,num3);
    } else if (num1>=num2 && num1>=num3 && num3>=num2){
        printf("Maior -> %d\nMenor -> %d",num1,num2);
    } else if ((num2>=num1 && num2>=num3 && num1>=num3)){
        printf("Maior -> %d\nMenor -> %d",num2,num3);
    } else if ((num2>=num1 && num2>=num3 && num3>=num1)){
        printf("Maior -> %d\nMenor -> %d",num2,num1);
    } else if ((num3>=num2 && num3>=num1 && num2>=num1)){
        printf("Maior -> %d\nMenor -> %d",num3,num1);
    } else if ((num3>=num2 && num3>=num1 && num1>=num2)){
        printf("Maior -> %d\nMenor -> %d",num3,num2);
    }
    return 0;

}

