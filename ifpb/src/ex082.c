/*  
    82. Escreva um programa que leia as três nota s de um  aluno e verifique se o mesmo está 
    aprovado por média, se fará prova final ou se está reprovado por média. Caso o aluno 
    tenha que fazer a prova final, o programa deve informar quanto ele terá que tirar na 
    prova. Você pode considerar que a média míni ma para  a aprovação por média é 7 e 
    que a média mínima para fazer a prova final é 4. O cálculo da prova final é calculado 
    através da fórmula abaixo.  
*/
#include <stdio.h>

#include <math.h>

int main()
{
    
    float nota1,nota2,nota3;

    printf("Abaixo, informe as tres notas do aluno.\n");
    printf("1� nota: ");
    scanf("%f",&nota1);
    printf("2� nota: ");
    scanf("%f",&nota2);
    printf("2� nota: ");
    scanf("%f",&nota3);

    float media = (nota1+nota2+nota3)/3;

    printf("\nMedia do aluno: %.2f\n\n",media);

    if (media>=7){
        printf("O aluno esta aprovado!");
    } else if (media<=4){
        printf("O aluno esta reprovado!");
    } else {
        float final = (25 - (3*media))/2;
        printf("O aluno tem direito a recuperacao!\n");
        printf("Nota necessaria para a aprovacao na prova final: %.2f",final);
    }
    return 0;

}
