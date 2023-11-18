/* 
    145. Escreva um programa que leia um número inteiro N e, a segui r leia vários números 
    inteiros. O processo de leitura deve ser encerrado quando a soma dos números 
    digitados pelo usuário (excluindo -se o valor de N) for superior ao valor de N.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um valor inteiro -> ");
    scanf("%d",&num);

    int c=0;
    int soma=0;
    if (num>0){
        while (c<num){
            soma+=c;
            printf("%d\n",c);
            if (soma>num){
                break;
            }
            c++;
        }
     } else if (num<0){
        c+=num;
        while (1){
            soma+=c;
            printf("%d\n",c);
            if (soma>num){
                break;
            }
            c++;
        }
    }
    return 0;
}
