/* 
    243. Escreva um programa que leia um caractere e verifique se o mesmo é uma letra 
    maiúscula, uma letra minúscula, um numeral ou nenhum dos t ipos an teriores. Esta 
    verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>
#include <ctype.h>


void verificador (char caractere)
{
    if (isupper(caractere)){
        printf("O caractere eh uma letra maiuscula!");
    } else if (islower(caractere)){
        printf("O caractere eh uma letra minuscula!");
    } else if (isdigit(caractere)){
        printf("O caractere eh um numeral!");
    } else {
        printf("O caractere nao eh letra maiuscula ou minuscula e nem um numeral!");
    }
}

int main()
{
    char c;
    printf("Informe um caractere -> ");
    scanf("%c",&c);

    verificador(c);
    return 0;
}
