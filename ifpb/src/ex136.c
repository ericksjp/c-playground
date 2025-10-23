/* 
    136. Escreva um programa que leia um número inteiro positivo N e calcule o seu valor 
    correspondente em binário.  
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    int base;
    char binary[500]="";

    if (num<0){//par numeros negativos
        strcat(binary,"-");
        num=num*-1;
    }

    int c=0;
    while (pow(2,c)<=num){//pegando o maior numero de potencia de base 2 menor ou igual ao numero
        base = pow(2,c);
        c++;
    }

    int soma =0;

    while (base>=1){//fazendo o inverso
        if (soma+base<=num){
            soma+=base;
            strcat(binary,"1");
        } else {
            strcat(binary,"0");
        }
        base/=2;
    }


    printf("\nTo binary -> %s\n",binary);
    return 0;

}

