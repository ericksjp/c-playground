/* 
    96. Escreva um programa que leia cinco números inteiros e determine o segundo maior 
    número digitado pelo usuário e a ordem em que o mesmo foi digitado.  
*/
#include <stdio.h>


int main()
{
    
    int num1,num2,num3,num4,num5;
    printf("Informe 5 numeros inteiros.\n\n");
    printf("1ro numero inteiro: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("2do numero inteiro: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("3ro numero inteiro: ");
    if (scanf("%d",&num3)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("4to numero inteiro: ");
    if (scanf("%d",&num4)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("5to numero inteiro: ");
    if (scanf("%d",&num5)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }

    printf("\n");

    if (num1>num2 && num1>num3 && num1>num4 && num1>num5){
        printf("%d - O 1ro numero digitado eh o maior.",num1);
    } else if (num2>num1 && num2>num3 && num2>num4 && num2>num5){
        printf("%d - O 2do numero digitado eh o maior.",num2);
    } else if (num3>num1 && num3>num2 && num3>num4 && num3>num5){
        printf("%d - O 3ro numero digitado eh o maior.",num3);
    } else if (num4>num1 && num4>num2 && num4>num3 && num4>num5){
        printf("%d - O 4to numero digitado eh o maior.",num4);
    } else if (num5>num1 && num5>num2 && num5>num3 && num5>num4){
        printf("%d - O 5to numero digitado eh o maior.",num5);
    } else {
        printf("Ha dois ou mais numeros maiores iguais, sendo �mpossivel determinar o maior entre eles.");
    }
    return 0;
}
