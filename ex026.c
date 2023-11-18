/* 
    26. Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão 
    participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada 
    dupla e o peso e a altura média de todos os jogadores do torneio.  
*/
#include <stdio.h>

int main()
{
    //declarando as variavies
    printf("<<< exe026 >>>\n\n");

    float peso1[4];
    float peso2[4];
    float altura1[4];
    float altura2[4];
    float mediapeso[4];
    float mediaaltura[4];
    float mediaalturageral;
    float mediapesogeral;

    int c=1;
    //recebendo os dados
    do {
        switch(c){
            case 1:
                printf("-------- PRIMEIRA DUPLA -----------\n");
                break;
            case 2:
                printf("\n-------- SEGUNDA DUPLA -----------\n");
                break;
            case 3:
                printf("\n-------- TERCEIRA DUPLA -----------\n");
                break;
            case 4:
                printf("\n-------- QUARTA DUPLA -----------\n");
                break;
        }
        printf("\nPeso do 1ro integrante (Kg): ");
        scanf("%f",&peso1[c]);
        printf("Altura do 1ro integrante (m): ");
        scanf("%f",&altura1[c]);
        printf("\nPeso do 2ro integrante (Kg): ");
        scanf("%f",&peso2[c]);
        printf("Altura do 2ro integrante (m): ");
        scanf("%f",&altura2[c]);

        //processando os dados
        mediapeso[c]= (peso1[c]+peso2[c])/2;
        mediaaltura[c]= (altura1[c]+altura2[c])/2;

        mediaalturageral+=altura1[c]+altura2[c];
        mediapesogeral+=peso1[c]+peso2[c];
        c++;

    } while (c<=4);


    printf("\n------ COLETANDO OS DADOS ---------\n\n");

    int cont=1;

    //retornando as medias de cada duplas
    for (cont;cont<=4;cont++){
        printf("Media de peso da %dra dupla: %.1fKgs\n",cont,mediapeso[cont]);
        printf("Media de altura da %dra dupla: %.1fm\n\n",cont,mediaaltura[cont]);
    }

    //retornando a media geral
    printf("Media geral de peso: %.1fkgs\n",mediapesogeral/8.0);
    printf("Media geral de altura: %.1fm\n",mediaalturageral/8.0);
    return 0;
}
