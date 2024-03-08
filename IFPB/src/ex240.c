/* 
    240. Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número 
    lido por extenso. Esta tarefa deve ser realizada atravé s de um  subprograma.  
*/
#include <stdio.h>

void extenso (int num)
{
    switch (num){
        case 1: printf("um"); break;
        case 2: printf("dois"); break;
        case 3: printf("tres"); break;
        case 4: printf("quatro"); break;
        case 5: printf("cinco"); break;
        case 6: printf("seis"); break;
        case 7: printf("sete"); break;
        case 8: printf("oito"); break;
        case 9: printf("nove"); break;
        case 10: printf("dez"); break;
    }
}

int main()
{
    int num;
    printf("Informe um numero de 1 a 10 -> ");
    scanf("%d",&num);

    printf("\nNumero por extenso -> ");
    extenso(num);
}