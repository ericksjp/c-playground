/* 
    33. Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um 
    dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos 
    por cada candidato. Para resolver este programa, consid ere que  não houve votos 
    brancos e nem nulos.  
*/
#include <stdio.h>

int main()
{
    
    printf("<<< exe033 >>>\n\n");

    int votos[3];
    int total=0;
    char nomes[3][50];

    int c=0;
    while (c<3){
        printf("----------------------------------------\n");
        printf("Informe o nome do %dro candidato: ",c+1);
        gets(nomes[c]);
        fflush(stdin);
        printf("Quantidade de votos do canditado: ");
        scanf("%d",&votos[c]);
        fflush(stdin);

        total+=votos[c];
        ++c;
        }
    printf("----------------------------------------\n");
    printf("\nTotal de votos: %d\n\n",total);

    int cont=0;
    while (cont<3){
        printf("========================================\n");
        printf("Nome do canditado: %s\n",nomes[cont]);
        printf("Total de votos recebidos: %d\n",votos[cont]);
        printf("Percentual de votos recebidos: %%%.2f\n",(votos[cont]/(float)total)*100);
        cont++;
    }
    printf("========================================\n");
    return 0;

}
