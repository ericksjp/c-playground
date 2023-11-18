/* 
    232. Escreva um programa que leia três números distintos e identifique o número que não 
    é nem o menor e nem o maior número. Esta verificação deve ser realizada através de 
    um s ubprograma.  
*/
#include <stdio.h>

int intermediario(int num1, int num2, int num3){

    if ((num1 >= num2 || num1 >= num3) && (num1 <= num3 || num1 <= num2)) return num1;
    else if ((num2 >= num1 || num2 >= num3) && (num2 <= num3 || num2 <= num1)) return num2;
    else return num3;
}

int main() {
    int num1, num2, num3;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o primeiro numero: ");
    scanf("%d", &num3);

    int result = intermediario(num1,num2,num3);

    printf("O numero intermediario dessa sequencia eh %d \n", result);
    return 0;
}