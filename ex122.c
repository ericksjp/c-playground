/* 
    122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série 
    de Fibon acci. 
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);

    int c=0;

    int n1=0;
    int n2=1;

    if (num==0){
        printf("0 esta na sequencia de finobacci!\n");
        getch(0);
        exit(0);
    } else if (num==1){
        printf("1 esta na sequencia de finobacci!\n");
        getch(0);
        exit(0);
    }

    while (c<100){
        unsigned long long int n3=n1+n2;
        if (num==n3){
            printf("%d esta na sequencia de finobacci!\n",num);
            getch(0);
            exit(0);
        }
        n1=n2;
        n2=n3;
        c++;
    }
    printf("%d nao esta na sequencia de finobacci.\n",num);
    getch(0);
    exit(0);
}
