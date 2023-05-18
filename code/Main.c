/*
Tic Tac Toe
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void clear()
{
    char clearmode[] = "std"; // accepted modes: <std // debug>
    if (strcmp(clearmode, "std") == 0) system("clear||cls");
    else if (strcmp(clearmode, "debug") == 0) printf("\e[2J");   
}

void text_en(char text_identifier[], char var1[], char var2[])
{
    if (strcmp(text_identifier, "Menu") == 0)
    {
        printf("=================================\n");
        printf("           Tic Tac Toe           \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Start Game!\n");
        printf("[2] Choose game mode\n");
        printf("[3] Board Configuration\n");
        printf("[4] Change player's name\n");
        printf("[5] Change language\n");
        printf("[6] Exit game\n");
    }
    else if (strcmp(text_identifier, "Game Mode") == 0)
    {
        printf("=================================\n");
        printf("             Game Mode           \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Player Vs Player\n");
        printf("[2] Computer plays as X\n");
        printf("[3] Computer plays as O\n");
        printf("[4] Back to Main Menu\n");

    }
    else if (strcmp(text_identifier, "Board Config") == 0)
    {
        printf("=================================\n");
        printf("       Board Configuration       \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Standard Board\n");
        printf("[2] Numpad Board\n");
        printf("[3] Back to Main Menu\n");
    }
    else if (strcmp(text_identifier, "Player Name") == 0)
    {
        printf("=================================\n");
        printf("          Player's Names         \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Change player %s name\n", var1);
        printf("[2] Change player %s name\n", var2);
        printf("[3] Back to Main Menu\n");
    }
    else if (strcmp(text_identifier, "Change Name") == 0)
    {
        printf("Change name of player %s: ", var1);
    }
    else if (strcmp(text_identifier, "ChangeLang") == 0)
    {
        printf("=================================\n");
        printf("         Change Language         \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] American english (EN-US)\n");
        printf("[2] Brazilian portuguese (PT-BR) \n");
        printf("[3] Back to Main Menu\n");
    }
    else if (strcmp(text_identifier, "Play Guide") == 0)
    {
        printf("Play Guide: \n");
    }
    else if (strcmp(text_identifier, "Choose Play") == 0)
    {
        printf("Player %s, choose your play: ", var1);
    }
    else if (strcmp(text_identifier, "Invalid Play") == 0)
    {
        printf("Invalid play! Chose another moviment: ");
    }
    else if (strcmp(text_identifier, "Tie") == 0)
    {
        printf("It's a tie! ");
    }
    else if (strcmp(text_identifier, "Win") == 0)
    {
        printf("Player %s wins! ", var1);
    }
    else if (strcmp(text_identifier, "Play Again") == 0)
    {
        printf("Do you want to  play again? [y/n]: ");
    }
}

void text_pt(char text_identifier[], char var1[], char var2[])
{
    if (strcmp(text_identifier, "Menu") == 0)
    {
        printf("=================================\n");
        printf("          Jogo da Velha          \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Iniciar jogo!\n");
        printf("[2] Escolher modo de jogo\n");
        printf("[3] Configuracao do tabuleiro\n");
        printf("[4] Alterar nome dos jogadores\n");
        printf("[5] Alterar idioma\n");
        printf("[6] Sair do jogo\n");
    }
    else if (strcmp(text_identifier, "Game Mode") == 0)
    {
        printf("=================================\n");
        printf("           Modo de Jogo          \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Player Vs Player\n");
        printf("[2] Computador joga como X\n");
        printf("[3] Computador joga como O\n");
        printf("[4] Voltar ao menu\n");

    }
    else if (strcmp(text_identifier, "Board Config") == 0)
    {
        printf("=================================\n");
        printf("    Configuracao do tabuleiro    \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Tabuleiro Padrao\n");
        printf("[2] Tabuleiro Numpad\n");
        printf("[3] Voltar ao menu\n");
    }
    else if (strcmp(text_identifier, "Player Name") == 0)
    {
        printf("=================================\n");
        printf("        Nome dos Jogadores       \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Alterar nome do jogador %s\n", var1);
        printf("[2] Alterar nome do jogador %s\n", var2);
        printf("[3] Voltar ao menu\n");
    }
    else if (strcmp(text_identifier, "Change Name") == 0)
    {
        printf("Altere o nome do jogador %s: ", var1);
    }
    else if (strcmp(text_identifier, "ChangeLang") == 0)
    {
        printf("=================================\n");
        printf("         Alterar Idioma          \n");
        printf("=================================\n");
        printf("\n");
        printf("[1] Ingles americano (EN-US)\n");
        printf("[2] Portugues brasileiro (PT-BR) \n");
        printf("[3] Voltar ao menu\n");
    }
    else if (strcmp(text_identifier, "Play Guide") == 0)
    {
        printf("Guia de Jogadas: \n");
    }
    else if (strcmp(text_identifier, "Choose Play") == 0)
    {
        printf("Jogador %s, escolha sua jogada: ", var1);
    }
    else if (strcmp(text_identifier, "Invalid Play") == 0)
    {
        printf("Jogada invalida! Escolha outro movimento: ");
    }
    else if (strcmp(text_identifier, "Tie") == 0)
    {
        printf("Deu velha! ");
    }
    else if (strcmp(text_identifier, "Win") == 0)
    {
        printf("O jogador %s ganhou! ", var1);
    }
    else if (strcmp(text_identifier, "Play Again") == 0)
    {
        printf("Deseja jogar novamente? [s/n]: ");
    }
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

int mainmenu(char lang[])
{
    int option;
    clear();
    if (strcmp(lang, "en_us") == 0) text_en("Menu", "", "");
    else if (strcmp(lang, "pt_br") == 0) text_pt("Menu", "", "");

    scanf("%d", &option);
    return option;
}

int gamemode(int oldconfig, char lang[])
{
    int option = 0;

    while (option != 1 && option != 2 && option != 3 && option != 4)
    {
        clear();
        if (strcmp(lang, "en_us") == 0) text_en("Game Mode", "", "");
        else if (strcmp(lang, "pt_br") == 0) text_pt("Game Mode", "", "");

        scanf("%d", &option);
    }

    if (option != 4) return option;
    else return oldconfig;
}

int boardConfig(int oldconfig, char lang[])
{   
    int option = 0;

    while (option != 1 && option != 2 && option != 3)
    {
        clear();
        if (strcmp(lang, "en_us") == 0) text_en("Board Config", "", "");
        else if (strcmp(lang, "pt_br") == 0) text_pt("Board Config", "", "");

        scanf("%d", &option);
    }
    
    if (option != 3) return option;
    else return oldconfig;
    
    
}

void changename(char Player[], char lang[])
{
    clear();
    if (strcmp(lang, "en_us") == 0) text_en("Change Name", Player, "");
    else if (strcmp(lang, "pt_br") == 0) text_pt("Change Name", Player, "");
    scanf(" %[^\n]s", Player);
}

void playersName(char PlayerX[], char PlayerO[], char lang[])
{
    int option = 0;

    while (option != 3)
    {
        clear();
        if (strcmp(lang, "en_us") == 0) text_en("Player Name", PlayerX, PlayerO);
        else if (strcmp(lang, "pt_br") == 0) text_pt("Player Name", PlayerX, PlayerO);
        scanf("%d", &option);

        if (option == 1) changename(PlayerX, lang);
        else if (option == 2) changename(PlayerO, lang);
    }
}

char* changeLang(char lang[])
{
    int option = 0;

    while (option != 1 && option != 2 && option != 3)
    {
        clear();
        if (strcmp(lang, "en_us") == 0) text_en("ChangeLang", "", "");
        else if (strcmp(lang, "pt_br") == 0) text_pt("ChangeLang", "", "");

        scanf("%d", &option);
    }

    if (option == 1) return "en_us";
    else if (option == 2) return "pt_br";
    else return lang;    
}

void printBoardSet(int config, char lang[])
{
    char board[3][3];
    if (strcmp(lang, "en_us") == 0) text_en("Play Guide", "", "");
    else if (strcmp(lang, "pt_br") == 0) text_pt("Play Guide", "", "");
    ChangeBoardSet(board, config);
    printboard(board);
    printf("\n");
}

void play(char board[3][3], char player_symbol, int config, char Player_name[], char lang[])
{
    int pos;
    int count;
    int move_completed = 0;
    if (strcmp(lang, "en_us") == 0) text_en("Choose Play", Player_name, "");
    else if (strcmp(lang, "pt_br") == 0) text_pt("Choose Play", Player_name, "");
    

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

        if (move_completed != 1) 
            {
                if (strcmp(lang, "en_us") == 0) text_en("Invalid Play", "", "");
                else if (strcmp(lang, "pt_br") == 0) text_pt("Invalid Play", "", "");
            }
    }
}

int check_bot_movement(char board[3][3], char verified, char bot_symbol)
{
    int sec_diagonal = 0;
    for (int i =0; i <3; i++)
    {
        int line = 0, column = 0, main_diagonal = 0;

        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == verified) line++;
            if (board[j][i] == verified) column++;
            if (board[j][j] == verified) main_diagonal++;
            if (i+j==2) if (board[i][j] == verified) sec_diagonal++;
        }
        if (line == 2)
        {
            if (board[i][0] == '_') {board[i][0] = bot_symbol; return 1;}
            else if (board[i][1] == '_') {board[i][1] = bot_symbol; return 1;}
            else if (board[i][2] == '_') {board[i][2] = bot_symbol; return 1;}
        }
        if (column == 2)
        {
            if (board[0][i] == '_') {board[0][i] = bot_symbol; return 1;}
            else if (board[1][i] == '_') {board[1][i] = bot_symbol; return 1;}
            else if (board[2][i] == '_') {board[2][i] = bot_symbol; return 1;}
        }
        if (main_diagonal == 2)
        {
            if (board[0][0] == '_') {board[0][0] = bot_symbol; return 1;}
            else if (board[1][1] == '_') {board[1][1] = bot_symbol; return 1;}
            else if (board[2][2] == '_') {board[2][2] = bot_symbol; return 1;}
                
        }
        if (sec_diagonal == 2)
        {
            if (board[0][2] == '_') {board[0][2] = bot_symbol; return 1;}
            else if (board[1][1] == '_') {board[1][1] = bot_symbol; return 1;}
            else if (board[2][0] == '_') {board[2][0] = bot_symbol; return 1;}
        }
    }
    return 0;
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
        pos = rand() % 5 + 1;
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
            if (move_completed != 1) board[1][1] = bot_symbol;
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
        int movement = 0;

        movement = check_bot_movement(board, bot_symbol, bot_symbol);

        if (movement == 0)
        {
            if (move_number %2 == 0) movement = check_bot_movement(board, 'X', bot_symbol);
            else movement = check_bot_movement(board, 'O', bot_symbol);
        }
        
        if (movement == 0) BotRandomMove(board, bot_symbol);
    }
}

int check(char board[3][3], char player, int identifier)
{
    int sec_diagonal = 0;
    for (int i =0; i <3; i++)
    {
        int line = 0, column = 0, main_diagonal = 0;

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
    }
    return 0;
}

int main()
{
    char lang[] = "en_us";
    char PlayAgain;
    int menu;
    int storeBoardConfig = 1, storeGameMode = 1;
    char PlayerX[32] = "X";
    char PlayerO[32] = "O";
    srand(time(NULL));
    while (1)
    {
        menu = 0;
        while (menu != 1 && menu != 6)
        {
            menu = mainmenu(lang);

            if (menu == 2) storeGameMode = gamemode(storeGameMode, lang);
            else if (menu == 3) storeBoardConfig = boardConfig(storeBoardConfig, lang);
            else if (menu == 4) playersName(PlayerX, PlayerO, lang);
            else if (menu == 5) strcpy(lang, changeLang(lang));
        }
        if (menu == 6) break;
        
        do
        {
            int PlayCount = 1;
            int WinState = 0;
            char board[3][3];
            ChangeBoardSet(board, 0);
            do
            {
                clear();
                printBoardSet(storeBoardConfig, lang);
                printboard(board);
                int even = PlayCount % 2 == 0;
                if (even){
                    if (storeGameMode == 1 || storeGameMode == 2) play(board, 'O', storeBoardConfig, PlayerO, lang);
                    else if (storeGameMode == 3) BotMove(board, PlayCount, 'O');
                    WinState = check(board, 'O', 2);
                }
                else{
                    if (storeGameMode == 1 || storeGameMode == 3) play(board, 'X', storeBoardConfig, PlayerX, lang);
                    else if (storeGameMode == 2) BotMove(board, PlayCount, 'X');
                    WinState = check(board, 'X', 1);
                }
                PlayCount++;

            }while (WinState == 0 && PlayCount != 10);

            printboard(board);

            if (WinState == 0)
            {
                if (strcmp(lang, "en_us") == 0) text_en("Tie", "", "");
                else if (strcmp(lang, "pt_br") == 0) text_pt("Tie", "", "");
            }
            else if(WinState == 1)
            {
                if (strcmp(lang, "en_us") == 0) text_en("Win", PlayerX, "");
                else if (strcmp(lang, "pt_br") == 0) text_pt("Win", PlayerX, "");
            }
            else if (WinState == 2)
            {
                if (strcmp(lang, "en_us") == 0) text_en("Win", PlayerO, "");
                else if (strcmp(lang, "pt_br") == 0) text_pt("Win", PlayerO, "");
            }

            if (strcmp(lang, "en_us") == 0) text_en("Play Again", "", "");
            else if (strcmp(lang, "pt_br") == 0) text_pt("Play Again", "", "");
            scanf(" %c", &PlayAgain);
        } while (PlayAgain == 's' || PlayAgain == 'S' || PlayAgain == 'y' || PlayAgain == 'Y');
    }
}