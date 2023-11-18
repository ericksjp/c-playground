/* 
    128. Escreva um programa que leia o nome e o peso de 20 bois que participam de uma 
    exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, 
    suponha que todos os bois têm pesos distintos.  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    
    char nomes [20][201];
    float pesos [20]={0};
    int c=0;

    do{
        fflush(stdin);
        printf("Informe o nome do %d boi ------> ",c+1);
        fgets(nomes[c], 202, stdin);
        printf("Informe o peso do %d boi (kg) -> ",c+1);

        if (scanf("%f",&pesos[c])==0){
            printf("-----------------------------------------\n");
            printf("Entrada invalida! Os dados desse boi serao descartados.\n");
            printf("-----------------------------------------\n");
            strcpy(nomes[c],"!!!!!!.p");
            pesos[c]=-999999.0;
        } else{
            printf("-----------------------------------------\n");
            printf("Dados registrados!\n");
            printf("-----------------------------------------\n");
        }

        c++;
    } while(c<20);

    float maior=0;
    float menor=1000000;
    int nome_maior=0;
    int nome_menor=0;

    c=0;
    while (c<20){

        int len = strlen(nomes[c]);

        if (nomes[c][len-1]=='\n'){
            nomes[c][len-1]='\0';
        }

        if (pesos[c]>maior && strcasecmp(nomes[c],"!!!!!!.p")!=0){
            maior = pesos[c];
            nome_maior=c;
        }

        if (pesos[c]<menor && strcasecmp(nomes[c],"!!!!!!.p")!=0){
            menor = pesos[c];
            nome_menor=c;
        }

        c++;
    }

    printf("\n============ RESULTADOS ============\n\n");

    printf("Maior boi -> %s\n",nomes[nome_maior]);
    printf("Seu peso  -> %.2fKgs\n\n",maior);

    printf("Menor boi -> %s\n",nomes[nome_menor]);
    printf("Seu peso  -> %.2fKgs\n",menor);

    return 0;
}
