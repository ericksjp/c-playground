/* 
    74. Escreva um programa que leia três números distintos e identifique o número que não  
    é nem o menor e nem o maior número.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe074 >>>\n\n");
    int num1,num2,num3;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num3);

    printf("\n");
    if (num1>=num2 && num1>=num3 && num2>=num3){
        printf("Medio -> %d",num2);
    } else if (num1>=num2 && num1>=num3 && num3>=num2){
        printf("Medio -> %d",num3);
    } else if ((num2>=num1 && num2>=num3 && num1>=num3)){
        printf("Medio -> %d",num1);
    } else if ((num2>=num1 && num2>=num3 && num3>=num1)){
        printf("Medio -> %d",num3);
    } else if ((num3>=num2 && num3>=num1 && num2>=num1)){
        printf("Medio -> %d",num2);
    } else if ((num3>=num2 && num3>=num1 && num1>=num2)){
        printf("Medio -> %d",num1);
    }
    return 0;

}
