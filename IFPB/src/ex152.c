/* 
    152. A matemática prova que números inteiros podem ser representados de maneira 
    única como um produto de potências de números primos distintos. Este produto é 
    chamado de decomposição em fatores primos do número e os expoente s são 
    chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23x32x5 e 21 = 
    3X7. Com base nessas informações, escreva um programa em pascal que obtenha a 
    decomposição em fatores primos de um número inteiro positivo informado pelo 
    usuário.  
*/
#include <stdio.h>

int main()
{
    int c=2;
    int pos=0;
    int primos[3244]={0};
    while (c<30000){
        int c2=2;
        int primo=1;
        while (c2<c){
            if (c%c2==0){
                primo=0;
            }
            c2++;
        }
        if (primo==1){
            primos[pos]=c;
            pos++;
        }
        c++;
    }

    int num=0;

    printf("=== DECOMPOSICAO EM FATORES PRIMOS ===\n\n");

    printf("Informe um numero inteiro positivo -> ");
    scanf("%d",&num);

    printf("\n");

    if (num==1){
        printf(" 1 ");
        return 0;
        exit(0);
    } else if (num<1){
        printf("Entrada Invalida!");
        return 0;
        exit(0);
    }

    c=0;
    int x=0;
    while (c<=3244){
        if (num%primos[c]==0){
            printf(" %d ",primos[c]);
            num = num/primos[c];
            if (num>1 && x==0){
                printf("x");
            }
            continue;
        }

        if (primos[c]>num){
            break;
        }
        c++;
    }
}
