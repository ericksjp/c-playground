/* 
    247. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique 
    se o número lido é ou não um palíndromo. Esta verificação deve ser realizada através 
    de um subprograma.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int palindromo (int num)
{
    int localnum = abs(num);
    int len = 0;
    int verificador = localnum;
    while (verificador>=10){
        verificador/=10;
        len++;
    }

    int reversedNum = 0;
    int cont = 0;
    while (len>=0){
        int casadecimal = pow(10,len);
        int unidade = localnum / casadecimal;
        localnum = localnum % casadecimal;
        reversedNum += unidade*pow(10,cont);
        cont++;
        len--;
    }

    if (num<0){
         reversedNum*=-1;
    }

    if (reversedNum==num){
        return 1;
    }
    return 0;

}

int main()
{
    int num;
    printf("Informe um numero inteiro -> ");
    scanf("%d",&num);

    int palindromoC = palindromo(num);

    if (palindromoC==1){
        printf("O numero %d eh palindromo!",num);
    } else {
        printf("O numero %d nao eh um palindromo!",num);
    }
    return 0;

}
