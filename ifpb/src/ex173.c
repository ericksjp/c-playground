/* 
    173. Escreva um programa que  leia u m vetor de 10 números inteiros e, a seguir, leia um 
    número inteiro N entre 3 e 10 e verifique quantas sequências de tamanho N formada 
    por elementos consecutivos existem no vetor, de forma que todos os elementos da 
    sequência formem uma progressão ari tmética . Por exemplo, no vetor (0, 4, 8, 10, 4, 
    9, 12, 15, 2, 15), podemos encontrar duas sequencias de três (N=3) elementos (0, 4, 
    8), (9, 12, 15) que formam uma progressão aritmética.  
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
    printf("Informe um numero inteiro entre 3 e 10 -> ");
    scanf("%d",&sequencia);
    printf("\n");

    for (int c = 0; c<10; c++){
        int c5 = 0;
        int verificador = 0;
        int pa = vetor[c+1]-vetor[c];

        if (c+sequencia<=10){
            //printf("(%d > %d",vetor[c+c5+1],vetor[c+c5]);
            while (c5<sequencia-1){
                //printf("(%d - %d == %d)\n",vetor[c+c5+1],vetor[c+c5],pa);
                if (vetor[c+c5+1]-vetor[c+c5]==pa){
                    verificador++;
                }
                //printf("(%d - %d == %d . %d)\n",vetor[c+c5+1],vetor[c+c5],pa,verificador);
                c5++;
            }
            if (verificador==sequencia-1){
                c5 =0;
                printf("(");
                while (c5<sequencia){
                    printf("%d",vetor[c+c5]);
                    c5++;
                    if(c5<sequencia){
                        printf(" , ");
                }
                }
                printf(")\n\n");

            }
        }
        //printf("\n");
    }
    return 0;

}
