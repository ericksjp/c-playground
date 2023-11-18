/* 
    230. Escreva um programa que lei a três números inteiros distintos e identifique o maior 
    número lido. Esta verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

int maior(int num1, int num2, int num3){
    int maior = num1;
    if (num2 >= maior && num2 >= num3) return num2;
    else if (num3 >= maior) return num3;
    else return num1;
}

int main()
{
    int num1,num2,num3;
    printf("Informe os tres numeros -> ");
    scanf("%d%d%d",&num1,&num2,&num3);

    int result = maior(num1, num2,  num3);

    printf("Maior numero -> %d\n",result);
    return 0;
}