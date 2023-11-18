/* 
    86. Escreva um programa que leia um caractere e verifique se o mesmo é uma letra 
    maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores.  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Informe um caracter: ");
    c = getchar();

    if (isdigit(c)){
        printf("eh um numero!");
    } else if (isupper(c)){
        printf("eh uma letra maiuscula!");
    } else if (islower(c)){
        printf("eh uma letra minuscula!");
    } else{
        printf ("nao eh uma letra maiuscula ou minuscula e nem um numero.");
    }
    return 0;
}
