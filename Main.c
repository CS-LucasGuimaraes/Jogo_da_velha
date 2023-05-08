/*
Tic Tac Toe
*/

// To-do:
// Limpar e traduzir função joga
// Limpar e traduzir função verifica
// Adicionar IA e criar menu "Game Mode"
// Adicionar função para adicionar nome dos jogadores
// Adicionar ScoreBoard

#include <stdio.h>
#include <stdlib.h>

void joga(char matriz[3][3], char jogador, int config)
{
    int posicao;
    printf("Jogador %c, escolha sua jogada: ", jogador);
    
    if (config == 1)
    {
        while(1)
        {
            scanf("%d", &posicao);

            if (posicao == 1)
                {
                if(matriz[0][0] == '_')
                    {matriz[0][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 2)
                {
                if(matriz[1][0] == '_')
                    {matriz[1][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 3)
                {
                if(matriz[2][0] == '_')
                    {matriz[2][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 4)
                {
                if(matriz[0][1] == '_')
                    {matriz[0][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 5)
                {
                if(matriz[1][1] == '_')
                    {matriz[1][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 6)
                {
                if(matriz[2][1] == '_')
                    {matriz[2][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 7)
                {
                if(matriz[0][2] == '_')
                    {matriz[0][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 8)
                {
                if(matriz[1][2] == '_')
                    {matriz[1][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 9)
                {
                if(matriz[2][2] == '_')
                    {matriz[2][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
        }
    }
    
    if (config == 2)
    {
        while(1)
        {
            scanf("%d", &posicao);

            if (posicao == 7)
                {
                if(matriz[0][0] == '_')
                    {matriz[0][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 8)
                {
                if(matriz[1][0] == '_')
                    {matriz[1][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 9)
                {
                if(matriz[2][0] == '_')
                    {matriz[2][0] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 4)
                {
                if(matriz[0][1] == '_')
                    {matriz[0][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 5)
                {
                if(matriz[1][1] == '_')
                    {matriz[1][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 6)
                {
                if(matriz[2][1] == '_')
                    {matriz[2][1] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 1)
                {
                if(matriz[0][2] == '_')
                    {matriz[0][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 2)
                {
                if(matriz[1][2] == '_')
                    {matriz[1][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }

            else if (posicao == 3)
                {
                if(matriz[2][2] == '_')
                    {matriz[2][2] = jogador;
                    break;}
                else{
                    printf("Jogada invalida!! Escolha outra jogada: ");
                    continue;}
                    }
            else{
                printf("Jogada invalida!! Escolha outra jogada: ");
                continue;}
        }
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

    if (mode == 1) // rising board mode
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

    if (mode == 2) // numpad board mode
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
            printf("\n Esse eh o modelo dos campos\n");
            ChangeBoardSet(board, storeBoardConfig);
            printboard(board);

            ChangeBoardSet(board, 0);
            do
            {
                printboard(board);
                int par = PlayCount % 2 == 0;
                if (par){
                    joga(board, 'O', storeBoardConfig);
                    WinState = verifica(board, 'O', 2);
                }
                else{
                    joga(board, 'X', storeBoardConfig);
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