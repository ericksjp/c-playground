/* 
    147. Escreva um programa que imprima todos os palíndromos existentes no intervalo 
    [1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a direita  é idên tico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002, 
    1221, 8888.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int num=1000;
    while (num<=9999){

        char num_str[5];
        sprintf(num_str,"%d",num);
        int len = strlen(num_str)-1;

        char num_str_inverso[5]="";
        char letra[2]="";

        int c=len;
        while(c>=0){
            sprintf(letra,"%c",num_str[c]);
            strcat(num_str_inverso, letra);
            c--;
        }

        //printf("\n");
        //printf("%s - %s\n",num_str,num_str_inverso);

        if (!strcmp(num_str,num_str_inverso)){
            printf("%s\n",num_str);
        }

        //printf("%s - %s\n",num_str,num_str_inverso);
        num++;
    }
    return 0;

}
