/* 
    172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um 
    número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada 
    por elementos consecutivos existem no vetor, de forma que todos  os ele mentos da 
    sequência estejam ordenados em ordem crescente. Por exemplo, n o vetor  (0, 6, 8, 
    10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0, 
    6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.  
*/
#include <stdio.h>

int main()
{
    
    int vetor[10];

    for (int c = 0; c<10; c++){
        int num;
        printf("Informe o %d numero do vetor: ",c+1);
        scanf("%d",&num);
        vetor[c] = num;
    }

    printf("\n");

    int sequencia;
    printf("Informe um numero inteiro entre 1 e 10 -> ");
    scanf("%d",&sequencia);
    printf("\n");

    for (int c = 0; c<10; c++){
        int c5 = 0;
        int verificador=0;

        if (c+sequencia<=10){
        int aa = vetor[c];
        //printf("(");
        while (c5<sequencia-1){
            //printf("(%d > %d",vetor[c+c5+1],vetor[c+c5]);
            if (vetor[c+c5+1]>vetor[c+c5]){
                verificador++;
            }
            //if (vetor[c+c5])
            //printf(" %d -",vetor[c+c5]);
            c5++;
        //printf(") %d\n",verificador);
        }
        //printf("\n");

        if (verificador==sequencia-1){
            c5 = 0;
            printf("(");
            while (c5<sequencia){
                printf("%d",vetor[c+c5]);
                c5++;
                if (c5<sequencia){
                    printf(" , ");
                }
            }
            printf(")\n");
        }
        //printf(")\n");
        //printf("\n%d\n",verificador);
        }
        /*if (vetor[c+2]>vetor[c+1] && vetor[c+1]>vetor[c]){
        printf("(");
        printf("%d - %d - %d",vetor[c], vetor[c+1],vetor[c+2]);
        printf(")\n");
        }*/
        return 0;

    }

}
