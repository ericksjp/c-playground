/* 
    14. Escreva um pro gram a que leia uma palavra e calcule o seu comprimento.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    printf("<<< exe014 >>>\n\n");

    char palavra[50];

    printf("Informe uma palavra: ");
    scanf("%s",&palavra);

    printf("Essa palavra tem %d caracteres.",strlen(palavra));
    return 0;

}
