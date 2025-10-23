/* 
    196. Escreva um programa que implemente um jogo de caça ao tesouro. O programa deve 
    ter um tabuleiro representado por uma matriz quadrada de ordem 10.  
    
    O tesouro  deve ser armazenado em uma posiçã o aleat ória do tabuleiro.  
    O jogo possui dois jogadores, que começam, respectivamente, nas posições (1,1) e (10,10) da matriz. 
    Em cada jogada, cada participante pode se mover uma casa no sentido horizontal ou 
    vertical. Ganha o jogador que atingir a casa co m o tes ouro primeiro.  
*/
#include <stdio.h>

#include <time.h>

#define BOARD_SIZE 10

int main()
{
    srand(time(NULL));
    int resp = 1;
    while (resp == 1)
    {

        int horizontal_win = rand() % 9;
        int vertical_win = rand() % 9;

        if (horizontal_win == 0 && vertical_win == 0)
        {
            vertical_win++;
        }
        else if (horizontal_win == 9 && vertical_win == 9)
        {
            vertical_win--;
        }

        // horizontal_win = 1;
        // vertical_win = 1;

        char board[BOARD_SIZE][BOARD_SIZE];

        for (int c = 0; c < BOARD_SIZE; c++)
        {
            for (int c2 = 0; c2 < BOARD_SIZE; c2++)
            {
                board[c][c2] = 219; //
            }
        }

        board[0][0] = '1';
        board[9][9] = '2';

        int horizontalp1 = 0;
        int verticalp1 = 0;
        int horizontalp2 = 9;
        int verticalp2 = 9;

        int c = 0;
        int verificador = 0;
        do
        {
            printf("                 ======== CA'S'A AO TESOURO ========");
            printf("\n\n");

            for (int c = 0; c < BOARD_SIZE; c++)
            {
                for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                {
                    if (c2 == 0)
                    {
                        printf("                    ");
                    }

                    printf("%c", board[c][c2]);
                    if (c2 < BOARD_SIZE - 1)
                    {
                        printf("--");
                    }
                }
                printf("\n");
                if (c < BOARD_SIZE - 1)
                {
                    for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                    {
                        if (c2 == 0)
                        {
                            printf("                  ");
                        }
                        printf("  |");
                    }
                    printf("\n");
                }
            }

            fflush(stdin);
            if (c % 2 == 0)
            {
                int num;
                printf("\n                          ---Player 1---\n");
                printf("                 -> Escolha para onde quer se mover: \n\n");
                printf("                  Digite 8 para ir para cima!\n");
                printf("                  Digite 4 para ir para a esquerda!\n");
                printf("                  Digite 6 para ir para a direita!\n");
                printf("                  Digite 2 para ir para baixo!\n\n");
                printf("                 -> ");
                if (scanf("%d", &num) == 0)
                {
                    num = 0;
                }
                if (num == 6)
                {
                    board[verticalp1][horizontalp1] = 207;
                    horizontalp1++;
                }
                else if (num == 4)
                {
                    board[verticalp1][horizontalp1] = 207;
                    horizontalp1--;
                }
                else if (num == 8)
                {
                    board[verticalp1][horizontalp1] = 207;
                    verticalp1--;
                }
                else if (num == 2)
                {
                    board[verticalp1][horizontalp1] = 207;
                    verticalp1++;
                }
                else if (num == 0)
                {
                    board[verticalp1][horizontalp1] = '1';
                }

                if (verticalp1 > 9)
                {
                    verticalp1--;
                    board[verticalp1][horizontalp1] = '1';
                }
                else if (verticalp1 < 0)
                {
                    verticalp1++;
                    board[verticalp1][horizontalp1] = '1';
                }
                else if (horizontalp1 > 9)
                {
                    horizontalp1--;
                    board[verticalp1][horizontalp1] = '1';
                }
                else if (horizontalp1 < 0)
                {
                    horizontalp1++;
                    board[verticalp1][horizontalp1] = '1';
                }

                board[verticalp1][horizontalp1] = '1';
            }
            else
            {
                int num;
                printf("\n                          ---Player 2---\n");
                printf("                 -> Escolha para onde quer se mover: \n\n");
                printf("                  Digite 8 para ir para cima!\n");
                printf("                  Digite 4 para ir para a esquerda!\n");
                printf("                  Digite 6 para ir para a direita!\n");
                printf("                  Digite 2 para ir para baixo!\n\n");
                printf("                 -> ");
                if (scanf("%d", &num) == 0)
                {
                    num = 0;
                }
                if (num == 6)
                {
                    board[verticalp2][horizontalp2] = 207;
                    horizontalp2++;
                }
                else if (num == 4)
                {
                    board[verticalp2][horizontalp2] = 207;
                    horizontalp2--;
                }
                else if (num == 8)
                {
                    board[verticalp2][horizontalp2] = 207;
                    verticalp2--;
                }
                else if (num == 2)
                {
                    board[verticalp2][horizontalp2] = 207;
                    verticalp2++;
                }
                else if (num == 0)
                {
                    board[verticalp2][horizontalp2] = '2';
                }

                if (verticalp2 > 9)
                {
                    verticalp2--;
                    board[verticalp2][horizontalp2] = '2';
                }
                else if (verticalp2 < 0)
                {
                    verticalp2++;
                    board[verticalp2][horizontalp2] = '2';
                }
                else if (horizontalp2 > 9)
                {
                    horizontalp2--;
                    board[verticalp2][horizontalp2] = '2';
                }
                else if (horizontalp2 < 0)
                {
                    horizontalp2++;
                    board[verticalp2][horizontalp2] = '2';
                }

                board[verticalp2][horizontalp2] = '2';
            }

            if (verticalp1 == vertical_win && horizontalp1 == horizontal_win)
            {
                verificador = 1;
            }

            if (verticalp2 == vertical_win && horizontalp2 == horizontal_win)
            {
                verificador = 2;
            }

            c++;
            printf("\n\n");
            system("cls");
        } while (verificador == 0);

        if (verificador == 1)
        {
            printf("    ======== TEMOS UM GANHADOR! O JOGADOR 1 ACHOU O TESOURO ========");
            printf("\n\n");
            board[vertical_win][horizontal_win] = 'T';
            for (int c = 0; c < BOARD_SIZE; c++)
            {
                for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                {
                    if (c2 == 0)
                    {
                        printf("                    ");
                    }

                    printf("%c", board[c][c2]);
                    if (c2 < BOARD_SIZE - 1)
                    {
                        printf("--");
                    }
                }
                printf("\n");
                if (c < BOARD_SIZE - 1)
                {
                    for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                    {
                        if (c2 == 0)
                        {
                            printf("                  ");
                        }
                        printf("  |");
                    }
                    printf("\n");
                }
            }
        }
        else if (verificador == 2)
        {
            printf("    ======== TEMOS UM GANHADOR! O JOGADOR 2 ACHOU O TESOURO ========");
            printf("\n\n");
            board[vertical_win][horizontal_win] = 'T';
            for (int c = 0; c < BOARD_SIZE; c++)
            {
                for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                {
                    if (c2 == 0)
                    {
                        printf("                    ");
                    }

                    printf("%c", board[c][c2]);
                    if (c2 < BOARD_SIZE - 1)
                    {
                        printf("--");
                    }
                }
                printf("\n");
                if (c < BOARD_SIZE - 1)
                {
                    for (int c2 = 0; c2 < BOARD_SIZE; c2++)
                    {
                        if (c2 == 0)
                        {
                            printf("                  ");
                        }
                        printf("  |");
                    }
                    printf("\n");
                }
            }
        }
        printf("\n                  -> Deseja jogar novamente ? \n");
        printf("                   Digite 1 para sim!\n\n");
        printf("                  -> ");
        if (scanf("%d", &resp) == 0)
        {
            resp = 0;
        }
        system("cls");
    }
    printf("shut down...");
    return 0;
}
