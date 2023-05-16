/*
Tic Tac Toe
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear()
{
    // printf("\e[2J"); //clear mode 2   
    system("clear||cls"); // clear mode 1
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
    clear();
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

int gamemode(int oldconfig)
{
    int option = 0;

    while (option != 1 && option != 2 && option != 3 && option != 4)
    {
        clear();
        printf("=================================\n");
        printf("           Modo de Jogo          \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Player Vs Player\n");
        printf("[2] Computador joga como primeiro\n");
        printf("[3] Computador joga como segundo\n");
        printf("[4] Voltar ao menu\n");

        scanf("%d", &option);
    }

    if (option != 4) return option;
    else return oldconfig;
}

int boardConfig(int oldconfig)
{   
    int option = 0;

    while (option != 1 && option != 2 && option != 3)
    {
        clear();
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
    
    
}

void changename(char Player[])
{
    clear();
    printf("Altere o nome do jogador %s: ", Player);
    scanf(" %[^\n]s", Player);
}

void playersName(char PlayerX[], char PlayerO[])
{
    int option = 0;

    while (option != 3)
    {
        clear();
        printf("=================================\n");
        printf("        Nome dos Jogadores       \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Alterar nome do jogador %s\n", PlayerX);
        printf("[2] Alterar nome do jogador %s\n", PlayerO);
        printf("[3] Voltar ao menu\n");

        scanf("%d", &option);

        if (option == 1) changename(PlayerX);
        else if (option == 2) changename(PlayerO);
    }
}

void printBoardSet(int config)
{
    char board[3][3];
    printf("Esse eh modelo dos campos:\n");
    ChangeBoardSet(board, config);
    printboard(board);
    printf("\n");
}

void play(char board[3][3], char player_symbol, int config, char Player_name[])
{
    int pos;
    int count;
    int move_completed = 0;
    printf("Jogador %s, escolha sua jogada: ", Player_name);

    while(1)
    {
        scanf("%d", &pos);
        if ((1 <= pos) & (pos <= 9))
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
                    board[j][i] = player_symbol;
                        move_completed = 1;
                    }
                    if (move_completed == 1) break;
                }
                if (config == 2) count -= 6;
                if (move_completed == 1) break;
            }
            if (move_completed == 1) break;
        }
        if (move_completed != 1) printf("Jogada invalida!! Escolha outra jogada: ");
    }
}

void BotRandomMove(char board[3][3], char bot_symbol)
{
    int pos, count;
    int move_completed = 0;

    while(1)
    {
        pos = rand() % 9 + 1;
        count = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                count++;
                if (pos == count) if (board[j][i] == '_')
                {
                board[j][i] = bot_symbol;
                move_completed = 1;
                }
                    if (move_completed == 1) break;
            }
            if (move_completed == 1) break;
        }
        if (move_completed == 1) break;    
    }
}

void BotMove(char board[3][3], int move_number, char bot_symbol)
{
    int count, pos;
    int move_completed = 0;

    if (move_number == 1) 
    {
        BotRandomMove(board, bot_symbol); //não implementado
    }
    else if (move_number == 2)
    {
        if (board[1][1] == 'X')
        {
            while(1)
            {
                pos = rand() % 4 + 1;
                count = 0;
                for (int i = 0; i < 3; i += 2)
                {
                    for (int j = 0; j < 3; j += 2)
                    {
                        count++;
                        if (pos == count)
                        {
                            board[i][j] = bot_symbol;
                            move_completed = 1;
                        }
                        if (move_completed == 1) break;
                    }
                    if (move_completed == 1) break;
                }
                if (move_completed == 1) break;
            }
        }
        else board[1][1] = 'O';
    }
    else
    {
        char player;
        //if (move_number %2 == 1) player = 'O';
        //else if (move_number %2 == 0) player = 'X';
        player = 'X';

        int line = 0, column = 0, main_diagonal = 0, sec_diagonal = 0;
        for (int i =0; i <3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == player) line++;
                if (board[j][i] == player) column++;
                if (board[j][j] == player) main_diagonal++;
                if (i+j==2) if (board[i][j] == player) sec_diagonal++;
            }
            if (line == 2)
            {
                move_completed = 1;
                if (board[i][0] == '_') board[i][0] = bot_symbol;
                else if (board[i][1] == '_') board[i][1] = bot_symbol;
                else if (board[i][2] == '_') board[i][2] = bot_symbol;
                else move_completed = 0;
            }
            if (column == 2)
            {
                move_completed = 1;
                if (board[0][i] == '_') board[0][i] = bot_symbol;
                else if (board[1][i] == '_') board[1][i] = bot_symbol;
                else if (board[2][i] == '_') board[2][i] = bot_symbol;
                else move_completed = 0;
            }
            if (i == 1)
            {
                if (main_diagonal == 2)
                {
                    move_completed = 1;
                    if (board[0][0] == '_') board[0][0] = bot_symbol;
                    else if (board[1][1] == '_') board[1][1] = bot_symbol;
                    else if (board[2][2] == '_') board[2][2] = bot_symbol;
                    else move_completed = 0;
                    
                }
                if (sec_diagonal == 2)
                {
                    move_completed = 1;
                    if (board[0][2] == '_') board[0][2] = bot_symbol;
                    else if (board[1][1] == '_') board[1][1] = bot_symbol;
                    else if (board[2][0] == '_') board[2][0] = bot_symbol;
                    else move_completed = 0;
                }
            }
            else 
            {
                line = 0;
                column = 0;
                main_diagonal = 0;
                sec_diagonal = 0;
            }
        if (move_completed == 1) break;
        }
        if (move_completed != 1) BotRandomMove(board, bot_symbol);
    }
}

int check(char board[3][3], char player, int identifier)
{
    int line = 0, column = 0, main_diagonal = 0, sec_diagonal = 0;
    for (int i =0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == player) line++;
            if (board[j][i] == player) column++;
            if (board[j][j] == player) main_diagonal++;
            if (i+j==2) if (board[i][j] == player) sec_diagonal++;
        }   
        if (line == 3 || column == 3 || main_diagonal == 3 || sec_diagonal == 3) 
        {
            return identifier;  
        }

        else 
        {
            line = 0;
            column = 0;
            main_diagonal = 0;
        }
    }
    return 0;
}

int main()
{
    char PlayAgain;
    int menu;
    int storeBoardConfig = 1, storeGameMode = 1;
    char PlayerX[32] = "X";
    char PlayerO[32] = "O";
    srand(time(NULL));
    while (1)
    {
        menu = 0;
        while (menu != 1 && menu != 5)
        {
            menu = mainmenu();

            if (menu == 2) storeGameMode = gamemode(storeGameMode);
            else if (menu == 3) storeBoardConfig = boardConfig(storeBoardConfig);
            else if (menu == 4) playersName(PlayerX, PlayerO);
        }
        if (menu == 5) break;
        
        do
        {
            int PlayCount = 1;
            int WinState = 0;
            char board[3][3];
            ChangeBoardSet(board, 0);
            do
            {
                clear();
                printBoardSet(storeBoardConfig);
                printboard(board);
                int even = PlayCount % 2 == 0;
                if (even){
                    if (storeGameMode == 1 || storeGameMode == 2) play(board, 'O', storeBoardConfig, PlayerO);
                    else if (storeGameMode == 3) BotMove(board, PlayCount, 'O');
                    WinState = check(board, 'O', 2);
                }
                else{
                    if (storeGameMode == 1 || storeGameMode == 3) play(board, 'X', storeBoardConfig, PlayerX);
                    else if (storeGameMode == 2) BotMove(board, PlayCount, 'X');
                    WinState = check(board, 'X', 1);
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