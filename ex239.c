/* 
    239. Escreva um programa que leia as três no tas de um aluno e verifique se o mesmo está 
    aprovado por média, se fará prova final ou se está reprovado por média. Caso o 
    aluno tenha que fazer a prova final, o programa deve informar quanto ele terá que 
    tirar na prova. Você pode considerar que a m édia mí nima para a aprovação por 
    média é 7 e que a média mínima para fazer a prova final é 4. O cálculo da prova final 
    é calculado através da fórmula abaixo. O programa deve ter um subprograma para 
    calcular a média parcial, um subprograma para determinar a  situaç ão do aluno e um 
    subprograma para calcular quanto um aluno terá que tirar na prova final.  
*/
#include <stdio.h>


float mediaparcial (float nota1, float nota2, float nota3)
{
    return (nota1+nota2+nota3)/3;
}

int situacao (float media)
{
    if (media<4){
        return -1;
    } else if (media>=7){
        return 1;
    } else {
       return 0;
    }
}

float provafinal (float mediaParcial)
{
    return (25-(3*mediaParcial))/2;
}

int main ()
{
    float nota1, nota2, nota3;
    printf("Informe as tres notas do aluno -> ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    float mediap = mediaparcial(nota1,nota2,nota3);
    int situacion = situacao (mediap);

    if (situacion==-1){
        printf("\nO aluno esta reprovado!\n");
    } else if (situacion==1){
        printf("\nO aluno esta aprovado!\n");
    } else {
        float notafinal = provafinal(mediap);
        printf("\nO aluno esta na final!\nNota a ser alcancada para a aprovacao %.2f\n",notafinal);
    }
    return 0;

}
