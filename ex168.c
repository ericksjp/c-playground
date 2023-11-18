/* 
    168. Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados 
    e gere um terceiro vetor também ordenado contendo todos os elementos dos dois 
    vetores lidos. O terceiro vetor deve ter to dos os elementos dois vetores, incluindo as 
    repetições.  
*/
#include <stdio.h>

int main()
{
    int vetor1[5];
    int vetor2[5];
    int vetor3[10];

    for (int c=0; c<5; c++){
        int num;
        printf("Informe o %d valor do vetor 1: ",c+1);
        scanf("%d",&num);
        vetor1[c]=num;
    }

    printf("\n");

    for (int c=0; c<5; c++){
        int num;
        printf("Informe o %d valor do vetor 2: ",c+1);
        scanf("%d",&num);
        vetor2[c]=num;
    }


    int* vetores[]={vetor1,vetor2};

    int contador=0;
    for (int c=0; c<2; c++){
        for (int c2=0; c2<5; c2++){
            vetor3[contador]=vetores[c][c2];
            contador++;
        }
    }

    int vetortemp[10];

    for (int c=0; c<10; c++){
        int repeticoes = 0;
        int maior_igual = 0;

        for (int c2=0; c2<10; c2++){
            if (vetor3[c]==vetor3[c2]){
                repeticoes++;
            }
            if (vetor3[c]>=vetor3[c2]){
                maior_igual++;
            }
        }

        while (repeticoes>0){
            vetortemp[maior_igual-repeticoes]=vetor3[c];
            repeticoes--;
        }
    }

    for (int c=0; c<10; c++){
        vetor3[c]=vetortemp[c];
    }

    printf("\nVetor 3: \n");

    for (int c=0; c<10; c++){
        printf("%d",vetor3[c]);
        if (c<9){
            printf(" , ");
        }
    }
    return 0;



}
