/* 
    62. Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo 
    de M.  
*/
#include <stdio.h>


int main()
{
    printf("<<< exe062 >>>\n\n");
    
    int num1,num2;
    printf("Informe um inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro inteiro: ");
    scanf("%d",&num2);

    if (num1>num2){

        if (num1%num2==0){
            printf("%d eh multiplo de %d",num1,num2);
        }else {
            printf("%d nao eh multiplo de %d",num1,num2);
        }

    } else if (num2>num1){

        if (num2%num1==0){
            printf("%d eh multiplo de %d",num2,num1);
        }else {
            printf("%d nao eh multiplo de %d",num2,num1);
        }

    } else {
        printf("%d eh multiplo de %d",num1,num2);
    }
    return 0;

}
