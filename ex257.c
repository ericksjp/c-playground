/* 
    257. Escreva um subprograma recursivo que receba como entrada dois números inteiros 
    correspondentes aos valores da base e do expoente e calcule o valor da potenciação. 
    Você pode supor que o expoen te é um  valor não negativo e que o caso 00 é tratado 
    no programa principal (ou seja, não precisa ser tratado dentro do subprograma).  
*/
#include <stdio.h>

int main()
{
    int base, expoente;

    printf("Informe a base da potenciacao -> ");
    scanf("%d",&base);
    printf("Informe expoente da potenciacao -> ");
    scanf("%d",&expoente);

    int resultado = recursivo(base,expoente);

    printf("\nResultado -> %d",resultado);
}

int recursivo(int base, int expoente)
{
    if (expoente==0){
        return 1;
    } else {
        //printf("%d - %d\n",base,expoente);
        return base * recursivo(base,expoente-1);
        //printf("%d - %d\n",base,expoente);
    }


}
