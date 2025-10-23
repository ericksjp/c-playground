/* 
    89. Escreva  um programa que leia um número inteiro entre 1 e 999 e calcule o seu valor 
    correspondente em algarismos romanos.  
*/
#include <stdio.h>


int main()
{
    
    int num;
    printf("Informe um numero inteiro entre 1 e 999 para ver seu valor em algarismos romanos.\n\n");
    printf("-----> ");
    if (scanf("%d",&num)==0 || (num<1 || num>999)){
        printf("Entrada Invalida!");
        getchar();
        exit(0);
    }

    //separar centena, dezena e unidade.
    int centena = num/100;
    int resto = num%100;
    int dezena = resto/10;
    int unidade = resto%10;

    //usando switch para ver que algarismo romano a centena representa, e adicionando essa representa��o em uma strring.  if para ignorar o switch se o num for 0
    char centena_romano[6];
    if (centena>0){
            switch(centena){
            case 1:
                strcpy(centena_romano,"C");
                break;
            case 2:
                strcpy(centena_romano,"CC");
                break;
            case 3:
                strcpy(centena_romano,"CCC");
                break;
            case 4:
                strcpy(centena_romano,"CD");
                break;
            case 5:
                strcpy(centena_romano,"D");
                break;
            case 6:
                strcpy(centena_romano,"DC");
                break;
            case 7:
                strcpy(centena_romano,"DCC");
                break;
            case 8:
                strcpy(centena_romano,"DCCC");
                break;
            case 9:
                strcpy(centena_romano,"CM");
                break;
            default:
                exit(0);
                break;
            }
    }

    //usando switch para ver que algarismo romano a dezena representa, e adicionando essa representa��o em uma strring.  if para ignorar o switch se o num for 0
    char dezena_romano[6];
    if (dezena>0){
            switch(dezena){
            case 1:
                strcpy(dezena_romano,"X");
                break;
            case 2:
                strcpy(dezena_romano,"XX");
                break;
            case 3:
                strcpy(dezena_romano,"XXX");
                break;
            case 4:
                strcpy(dezena_romano,"XL");
                break;
            case 5:
                strcpy(dezena_romano,"L");
                break;
            case 6:
                strcpy(dezena_romano,"LX");
                break;
            case 7:
                strcpy(dezena_romano,"LXX");
                break;
            case 8:
                strcpy(dezena_romano,"LXXX");
                break;
            case 9:
                strcpy(dezena_romano,"XC");
                break;
            default:
                exit(0);
                break;
            }
    }

    //usando switch para ver que algarismo romano a unidade representa, e adicionando essa representa��o em uma strring. if para ignorar o switch se o num for 0
    char unidade_romano[5];
    if (unidade>0){
            switch(unidade){
            case 1:
                strcpy(unidade_romano,"I");
                break;
            case 2:
                strcpy(unidade_romano,"II");
                break;
            case 3:
                strcpy(unidade_romano,"III");
                break;
            case 4:
                strcpy(unidade_romano,"IV");
                break;
            case 5:
                strcpy(unidade_romano,"V");
                break;
            case 6:
                strcpy(unidade_romano,"VI");
                break;
            case 7:
                strcpy(unidade_romano,"VII");
                break;
            case 8:
                strcpy(unidade_romano,"VIII");
                break;
            case 9:
                strcpy(unidade_romano,"IX");
                break;
            default:
                exit(0);
                break;
            }
    }

    //juntando todas as strings que representam centena, dezena e unidade, assim formando uma string que vai representar o algarismo romano!
    char romano[50];
    strcat(romano, centena_romano);
    strcat(romano,dezena_romano);
    strcat(romano,unidade_romano);

    //informando para o usuario
    printf("\n<<<Conversao do numerico para o romano>>>\n\n");
    printf("%d ----->  %s\n",num,romano);
    getchar();
}
