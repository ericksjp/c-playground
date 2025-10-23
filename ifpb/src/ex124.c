/* 
    124. Escreva um programa que imprima os seis primeiros pares de números primos 
    gêmeos. Dois números são chamados de primos gêm eos se eles forem primos e a 
    diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).  
*/
#include <stdio.h>

int main()
{
    int see = 0;
    int primos[100]={0};
    int c=0;
    while (c<522){
        int check=1;
        int ver = 2;
        while (ver<c){
            if (c%ver==0){
                check =0;
                break;
            }
            ver++;
        }

    if (check==1){
        primos[see]=c;
        see++;

    }
        c++;
    }

    printf("\n\n");
    c=0;

    int primos_par[50]={0};
    int primos_impar[50]={0};
    int vep=0;
    int vei=0;
    while (c<100){
        if (c%2==0){
            primos_par[vep]=primos[c];
            vep++;
        } else{
            primos_impar[vep]=primos[c];
            vei++;
        }
        c++;
    }

    c=0;
    int a=0;
    int b =0;
    while (c<50){
        if (primos_par[c]-primos_impar[c]==2){
            printf("%d - %d = 2\n",primos_par[c],primos_impar[c]);
        }
    c++;
    }
    return 0;

}
