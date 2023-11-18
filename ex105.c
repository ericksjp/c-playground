/* 
    105. Escreva um pro grama q ue leia dois números inteiros M e N e calcule a soma de todos 
    os números do intervalo [M, N]
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Informe um numero inteiro: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }
    printf("Informe outro numero inteiro: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }

    if (num1>num2){
        num1-=1;
        while (num1>num2){
            printf("\n%d",num1);
            num1--;
        }
    } else if (num1<num2){
        num1+=1;
        while (num1<num2){
            printf("\n%d",num1);
            num1++;
        }
    } else{
        printf("intervalo vazio");
    }
    return 0;

}
