/* 
    95. Escreva um programa que leia quatro números reais e verifique se eles formam, na 
    ordem em que foram digitados, uma progressão aritmética, uma progressão 
    geométrica, os dois tipos de progressão ou nenhum tipo de progressão.  
*/
#include <stdio.h>


int main()
{
    
    int num1, num2, num3, num4;
    printf("Informe uma sequencia de 4 nemeros inteiros.\n\n");
    printf("Informe o 1ro numero inteiro da sequencia: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe o 2do numero inteiro da sequencia: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe o 3ro numero inteiro da sequencia: ");
    if (scanf("%d",&num3)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe o 4� numero inteiro da sequencia: ");
    if (scanf("%d",&num4)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }

    printf("\n%d -> %d -> %d -> %d\n",num1,num2,num3,num4);

    int razao1= num2-num1;
    int razao2= num3-num2;
    int razao3= num4-num3;

    float razao_pg1= (float)num2/num1;
    float razao_pg2= (float)num3/num2;
    float razao_pg3= (float)num4/num3;

    if (razao1==razao2 && razao2==razao3 && razao3==razao1){
        printf("A sequencia informada eh uma progressao aritmetica.");
    } else if (razao_pg1==razao_pg2 && razao_pg2==razao_pg3 && razao_pg3==razao_pg1){
        printf("A sequencia informada eh uma progressao geometrica.");
    } else{
        printf("A sequencia informada nao eh PG ou PA.");
    }
    return 0;
}
