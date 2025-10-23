/* 
    143. Escreva um programa que leia dez números inteiros e calcu le a diferença entre os 
    dois maiores números digitados pelo usuário.  
*/
#include <stdio.h>

int main ()
{
    int numeros[10]={0};

    printf("Abaixo, informe 10 numeros inteiros.\n\n");

    int cont=0;
    while (cont<10){
        printf("%d numero -> ",cont+1);
        scanf("%d",&numeros[cont]);
        cont++;
    }

    cont=0;
    int maior=0;
    int segundo_maior=0;
    while (cont<10){
            if (numeros[cont]>=maior){
                segundo_maior=maior;
                maior=numeros[cont];
            }
        cont++;
    }


    printf("Maior numero informado         -> %d\n",maior);
    printf("Segundo maior numero informado -> %d\n",segundo_maior);
    return 0;
}
