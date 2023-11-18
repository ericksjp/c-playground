/* 
    129. Escreva um programa que leia dois números inteiros M e N e imprima todos os pares 
    (x, y) possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior 
    ou igual a x.  
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&num2);

    if (num1-num2==1 || num2-num1==1 || num1==num2){
        printf("Intervalo vazio.");
        return 0;
        exit(0);
    }


    if (num1>num2){ //printando todos os numeros
        num1 = num1-1;
        int cont=0;
        while (num1>num2){
            if (num1%2==0){
                printf("%d\n", num1);
            } else{
                printf ("%d ",num1);
            }
            num1--;
        }

    } else if (num1<num2){ //printando todos os numeros
        num1 = num1+1;
        int cont=0;
        while (num1<num2){
            if (num1%2==0){
                printf("%d\n", num1);
            } else{
                printf ("%d ",num1);
            }
            num1++;
        }
    }
    return 0;
}






/*
    } else if (num1<num2){ //printando apenas os numeros pares
        num1 = num1+1;
        int cont=0;
        while (num1<num2){
            if (num1%2==0){
                printf("%d ", num1);
                cont++;
                if (cont%2==0){
                    printf("\n");
                }
            }
            num1++;
        }
    }

}
*/
