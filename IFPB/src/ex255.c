/* 
    255. Escreva um subprograma recursivo que receba como entrada o term o inici al e a 
    razão de uma progressão aritmética e um número inteiro positivo N e calcule o 
    enésimo termo da progressão.  
*/
#include <stdio.h>

int main()
{
    int termo_inicial;
    int razao, n, k;
    printf("Termo inicial -> ");
    scanf("%d",&termo_inicial);
    printf("Razao -> ");
    scanf("%d",&razao);
    printf("Informe um umero inteiro -> ");
    scanf("%d",&n);

    int enesimo = recursivo(termo_inicial, razao,n);

    printf("\nEnesimo termo dessa PA: %d",enesimo);

}

int recursivo (int ti, int razao, int enesimo)
{
    if (enesimo==1){
        return ti;
    } else {
        //printf ("%d ",ti);
        return recursivo(ti+razao,razao,enesimo-1);
    }
}
