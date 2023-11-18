/* 
    140. Escreva um programa que leia vários números inteiros e calcule a média dos 
    números pares e a média dos números ímpares. O processamento deverá ser 
    encerrado quando for lido o valor 0, que não dev erá ser  processado.  
*/
#include <stdio.h>

int main()
{
    int pares=0;
    int impares=0;

    int c_par=0;
    int c_impar=0;

    int num=-1;
    while (num!=0){
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);

        if (num%2==0 && num!=0){
            pares+=num;
            c_par+=1;
        } else if (num%2!=0) {
            impares+=num;
            c_impar+=1;
        }
    }

    float media_par;
    float media_impar;

    if (c_par==0){
        media_par=0;
    } else{
        media_par = (float)pares/c_par;
    }

    if (c_impar==0){
        media_impar=0;
    } else{
        media_impar = (float)impares/c_impar;
    }

    printf("\nFIM \n\n");

    printf("Media dos numeros pares digitados   -> %.2f\n",media_par);
    printf("Media dos numeros impares digitados -> %.2f\n",media_impar);
    return 0;
}
