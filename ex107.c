/* 
    107. Escreva um programa que leia dois números  inteiros M e N e calcule a média 
    aritmética dos números primos do intervalo [M, N].  
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Informe um numero inteiro: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }
    printf("Informe outro numero inteiro: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }

    int num_show = num1;

    int primo = 0;
    int cont =0;
    if (num1>num2){
        num1-=1;
        int teste=0;
        while (num1>num2){
            int c=2;
            while (c<num1){
                //printf("%d %d\n",c,num1);
                if (num1%c!=0){
                    //printf("nd\n");
                    teste=1;
                } else{
                    teste=0;
                    break;
                }
            c++;
            }
        if (teste==1){primo+=num1;cont+=1;}
        num1--;
        }
    }

    else if (num1<num2){
        num2-=1;
        int teste=0;
        while (num2>num1){
            int c=2;
            while (c<num2){
                if (num2%c!=0){
                    teste=1;
                } else{
                    teste=0;
                    break;
                }
            c++;
            }

        if (teste==1){primo+=num2; cont+=1;}

        num2--;
        }
    }
    else{
        printf("intervalo vazio");
        return 0;
        exit(0);
    }

    float media = (float)primo/cont;
    printf("Numeros primos encontrados nesse intervalo: %d\n",cont);
    printf("\nMedia aritmetica dos numeros primos no intervalo informado:\n---> %.2f",media);

    //printf("A media aritmetica do intervalo entre %d e %d eh %.2f",num_show,num2,media);
    return 0;

}
