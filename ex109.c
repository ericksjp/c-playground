/* 
    109. Escreva um programa que leia dois números inteiros M e N e um número inteiro  X e 
    imprima todos os divisores exatos de X existentes no intervalo [M, N].  
*/
#include <stdio.h>

int main()
{
    int num1,num2,x;
    printf("Informe o numero que abre o intervalo: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada Invalida!");
        exit(0);
    }
    printf("Informe o numero que fecha intervalo: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }
    printf("Informe o numero que analisa o intervalor: ");
    if (scanf("%d",&x)==0){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }

    printf("\nNumeros divisiveis por %d no intervalo informado: \n",x);

    int vazio=0;
    int contador;
    if (num1>num2){
        contador=num1-1;
            while (contador>num2){
                if (contador%x==0){
                    printf("%d\n",contador);
                    vazio=1;
                }
                contador--;
            }
        if (vazio==0){
            printf("No intervalo entre %d e %d nao ha numeros divisiveis por %d.",num1,num2,x);
        }

    } else if (num1<num2){
        contador=num1+1;
        while (contador<num2){
            if (contador%x==0){
                printf("%d\n",contador);
                vazio=1;
            }
            contador++;
        }
        if (vazio==0){
            printf("No intervalo entre %d e %d nao ha numeros divisiveis por %d.",num2,num1,x);
        }
    } else {
        printf("Como os numeros sao iguais, o intervalo entre eles.");
    }
    return 0;
}
