/*
Tic Tac Toe
*/

#include <stdio.h>
#include <stdlib.h>

void printboard(char board[3][3])
{
    printf("   %c|%c|%c\n",board[0][0],board[1][0],board[2][0]);
    printf("   %c|%c|%c\n",board[0][1],board[1][1],board[2][1]);
    printf("   %c|%c|%c\n\n",board[0][2],board[1][2],board[2][2]);
}

void ChangeBoardSet(char board[3][3], int mode)
{
    if (mode == 0) //clean board
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[j][i] = '_';
            }
            
        }
        
    }

    else if (mode == 1) // rising board mode
    {
        int count = 48; // working with string numbers in ascii
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                count++;
                board[j][i] = count;
            }
            
        }
        
    }

    else if (mode == 2) // numpad board mode
     {
        int count = 54; // working with string numbers in ascii
        for (int i = 0; i < 3; i++)
        {
            
            for (int j = 0; j < 3; j++)
            {
                count++;
                board[j][i] = count;
            }
        count -= 6;
        }
        
    }
}   

int mainmenu()
{
    int option;
    system("clear||cls");
    printf("=================================\n");
    printf("           Tic Tac Toe           \n");
    printf("=================================\n");
    printf("\n");
    printf("[1] Iniciar jogo!\n");
    printf("[2] Escolher modo de jogo\n");
    printf("[3] Configuracao do tabuleiro\n");
    printf("[4] Alterar nome dos jogadores\n");
    printf("[5] Sair do jogo\n");

    scanf("%d", &option);
    return option;
}

void gamemode()
{
    //code
}

int boardConfig(int oldconfig)
{   
    int option = 0;

    while (option != 1 && option != 2 && option != 3)
    {
        system("clear||cls");
        printf("=================================\n");
        printf("    Configuracao do tabuleiro    \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Tabuleiro Padrao\n");
        printf("[2] Tabuleiro Numpad\n");
        printf("[3] Voltar ao menu\n");

        scanf("%d", &option);
    }
    
    if (option != 3) return option;
    else return oldconfig;
    
    mainmenu();
}

void playersName()
{
    //code
}

void printBoardSet(int config)
{
    char board[3][3];
    printf("\n\nEsse eh modelo dos campos:\n");
    ChangeBoardSet(board, config);
    printboard(board);
    printf("\n");
}

void play(char board[3][3], char player, int config)
{
    int pos;
    int count;
    int move_completed = 0;
    printf("Jogador %c, escolha sua jogada: ", player);

    while(1)
    {
        scanf("%d", &pos);
        if ((0 <= pos) & (pos <= 9))
        {
            if (config == 1) count = 0;
            else if (config == 2) count = 6;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    count++;
                    if (pos == count) if (board[j][i] == '_')
                    {
                    board[j][i] = player;
                        move_completed = 1;
                    }
                    if (move_completed == 1) break;
                }
                if (config == 2) count -= 6;
                if (move_completed == 1) break;
            }
            if (move_completed == 1) break;
            else if (pos == 0)
            {
                printBoardSet(config);
                printboard(board);
                printf("Jogador %c, escolha sua jogada: ", player);
            }
        }
        if (pos != 0) printf("Jogada invalida!! Escolha outra jogada: ");
    }    
}

int verifica(char matriz[3][3], char jogador, int identificador)
{
    if (matriz[0][0] == jogador && matriz[1][0] == jogador && matriz[2][0] == jogador)
        return identificador;
    else if(matriz[0][1] == jogador && matriz[1][1] == jogador && matriz[2][1] == jogador)
        return identificador;
    else if(matriz[0][2] == jogador && matriz[1][2] == jogador && matriz[2][2] == jogador)
        return identificador;
    else if(matriz[0][0] == jogador && matriz[0][1] == jogador && matriz[0][2] == jogador)
        return identificador;
    else if(matriz[1][0] == jogador && matriz[1][1] == jogador && matriz[1][2] == jogador)
        return identificador;
    else if(matriz[2][0] == jogador && matriz[2][1] == jogador && matriz[2][2] == jogador)
        return identificador;
    else if(matriz[0][0] == jogador && matriz[1][1] == jogador && matriz[2][2] == jogador)
        return identificador;
    else if(matriz[0][2] == jogador && matriz[1][1] == jogador && matriz[2][0] == jogador)
        return identificador;
    else
        return 0;
    
}

int main()
{
    char PlayAgain;
    int menu;
    int storeBoardConfig = 1;
    while (1)
    {
        menu = 0;
        while (menu != 1 && menu != 5)
        {
            menu = mainmenu();

            if (menu == 2) gamemode();
            else if (menu == 3) storeBoardConfig = boardConfig(storeBoardConfig);
            else if (menu == 4) playersName();
        }
        if (menu == 5) break;
        
        do
        {
            int PlayCount = 1;
            int WinState = 0;
            char board[3][3];
            system("clear||cls");
            printBoardSet(storeBoardConfig);
            printf(" Digite 0 a qualquer momento para mostrar o modelo novamente.\n\n");
            ChangeBoardSet(board, 0);
            do
            {
                printboard(board);
                int par = PlayCount % 2 == 0;
                if (par){
                    play(board, 'O', storeBoardConfig);
                    WinState = verifica(board, 'O', 2);
                }
                else{
                    play(board, 'X', storeBoardConfig);
                    WinState = verifica(board, 'X', 1);
                }
                PlayCount++;

            }while (WinState == 0 && PlayCount != 10);

            printboard(board);

            if (WinState == 0)
            {
                printf("\nDeu velha! ");
            }
            else if(WinState == 1)
            {
                printf("\nO jogador X GANHOUU!!! ");
            }
            else if (WinState == 2)
            {
                printf("\nO jogador O GANHOUU!!! ");
            }

            printf("Deseja jogar novamente? [s/n]: ");
            scanf(" %c", &PlayAgain);
        } while (PlayAgain == 's' || PlayAgain == 'S');
    }
}