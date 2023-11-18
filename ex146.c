/* 
    146. Escreva um programa que leia dois números inteiros M e N e calcule os valores  de M 
    div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e 
    mod.  
*/
#include <stdio.h>

int main()
{
    int m,n;
    printf("Informe um numero inteiro que representara o dividendo -> ");
    scanf("%d",&m);
    printf("Informe um numero inteiro que representara o divisor   -> ");
    scanf("%d",&n);

    if (n==0){
        printf("Error!");
        return 0;
        exit(0);
    }

    int somador=0;
    int quociente=0;
    while (somador<=m){
        somador+=n;
        quociente++;
    }
    quociente--;
    int resto = m-(somador-n);

    printf("\nDivisao de numeros inteiros!!!\n");
    printf("\nM / N -> %d\n",quociente);
    printf("M %% N -> %d\n",resto);
    return 0;
}
