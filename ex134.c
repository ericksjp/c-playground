/* 
    134. Escreva um pr ograma que leia um número inteiro N e imprima a figura abaixo, onde N 
    é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
    considerado que N=5.  
    
    *****  
    ****  
    *** 
    ** 
    *
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d",&num);

    printf("\n");

    char teste [50];
    char teste2[2]="*";

    /*while (num>0){
    strcat(teste,teste2);
    printf("%s\n",teste);
    num--;

    }*/

    int cont=num;
    while (cont>0){
    strcat(teste,teste2);
    cont--;
    }

    int len = strlen(teste);

    cont=len;
    while (cont>0){
        printf("%s\n",teste);
        teste[cont-1]='\0';
        cont--;
    }

    cont=num;
    while (cont>0){
    strcat(teste,teste2);
    printf("%s\n",teste);
    cont--;
    }
    return 0;

}
