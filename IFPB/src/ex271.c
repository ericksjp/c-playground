/* 
    271. Escreva um subprograma recurs ivo que  receba como entrada um vetor de dez 
    números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique 
    se o número X está presente no vetor entre as posições M e N. Esta verificação deve 
    ser feita através de uma busca binária.  
*/
#include <stdio.h>


int bb(int *vet1, int x, int min, int max)
{
    int metade = (max-min)/2;
    if (*(vet1+min)==x || *(vet1+max)==x || *(vet1+metade)==x){
        return 1;
    } else if (max-min<2){
        return 0;
    } else {
        if (x<*(vet1+metade)){
            return (vet1, x, min, metade);
        } else if (x>*(vet1+metade)){
            return (vet1, x, metade, max);
        }
    }
}

int main()
{
    int lista[]={1,2,3,4,5,6,7,8,9,10};

    int num;
    printf("Informe o numero que quer encontrar-> ");
    scanf("%d",&num);

    int min;
    printf("Informe em qual intervalo deseja procurar (Minimo) -> ");
    scanf("%d",&min);

    int max;
    printf("Informe em qual intervalo deseja procurar (Maximo) -> ");
    scanf("%d",&max);

    int ver = bb(lista,num,min,max);

    if (ver==1){
        printf("Achei o numero!");
    }else {
        printf("nao achei o numero :(");
    }
}
