/* 
    259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e 
    imprima o seu valor correspondente em hexadecimal.  
*/
#include <stdio.h>


int main()
{
    int decimal;

    printf("Informe o numero decinal --> ");
    scanf("%d",&decimal);



    printf("Hexadecimal correspndente -> ");
    recursivo(decimal);

    return 0;
    printf("\n");

    //printf("\nResultado -> %d",resultado);
}

int recursivo(int decimal)
{
    if (decimal==0){
        //printf (" - oi");
    } else {
        //printf("%d",decimal%2);
        recursivo(decimal/16);
        if (decimal%16==10){
            printf("A");
        } else if (decimal%16==11){
            printf("B");
        } else if (decimal%16==12){
            printf("C");
        } else if (decimal%16==13){
            printf("D");
        } else if (decimal%16==14){
            printf("E");
        } else if (decimal%16==15){
            printf("F");
        } else{
            printf("%d",decimal%16);
        }
    }


}
