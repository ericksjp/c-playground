/* 
    118. Escreva um p rograma  que leia um número N e imprima os N primeiros números 
    primos positivos.  
*/
#include <stdio.h>

int primo(int n){

    int contador=2;

    if (n<=1){
        return 0;
    } else if (n==2){return 1;}
    else {
        while (contador<n){
            if (n%contador==0){
                return 0;
            }
            contador++;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d",&n);

    int cont=0;
    int user_cont=0;
    while (cont<=9999999999 && user_cont<n){
        if (primo(cont)){
            printf("%d\n",cont);
            user_cont++;
        }
        cont++;
    }
    return 0;
}
