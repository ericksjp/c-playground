/* 
    83. Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número 
    lido por extenso.  
*/
#include <stdio.h>


int main()
{
    
    int numero;

    printf("Abaixo, informe um numero inteiro de 0 a 10.\n");
    printf("Numero: ");
    if (scanf("%d",&numero)==0){
        printf("Seja la oque voce digitou, eh invalido!");
        exit(0);
    }

    printf("\n");

    switch (numero)
    {
    case 0:
        printf("%d -> zero",numero);
        break;
    case 1:
        printf("%d -> um",numero);
        break;
    case 2:
        printf("%d -> dois",numero);
        break;
    case 3:
        printf("%d -> tres",numero);
        break;
    case 4:
        printf("%d -> quatro",numero);
        break;
    case 5:
        printf("%d -> cinco",numero);
        break;
    case 6:
        printf("%d -> seis",numero);
        break;
    case 7:
        printf("%d -> sete",numero);
        break;
    case 8:
        printf("%d -> oito",numero);
        break;
    case 9:
        printf("%d -> nove",numero);
        break;
    case 10:
        printf("%d -> dez",numero);
        break;
    default:
        printf("Seja la oque voce digitou, eh invalido!");
        break;
    }
    return 0;

}
