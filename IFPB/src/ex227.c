/* 
    227. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0 -
    12 anos), adolescente (13 -17 anos),  adulta  (18-59) ou idosa (acima de 60 anos). Esta 
    verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

// 1 - crianca | 2 - adolescente | 3 - adulta | 4 - idosa
int faseP(int idade) {
    if (idade < 13) return 1;
    else if (idade > 59) return 4;
    else if (idade > 17) return 3;
    else return 2;
}


int main() {
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("-----------------------------------------\n");
    int fase= faseP(idade);

    printf("Voce eh ");
    if (fase == 1) printf("uma crianca!");
    else if (fase == 2) printf("um adolescente!");
    else if (fase == 3) printf("um adulto!");
    else printf("um idoso!");
    printf("\n");

    return 0;
}