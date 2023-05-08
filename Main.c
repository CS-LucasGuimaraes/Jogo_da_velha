/*
Joguinho da velha
*/

#include <stdio.h>


void joga(char matriz[3][3], char jogador)
{
    int posicao;
    printf("Jogador %c, escolha sua jogada: ", jogador);
    
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
    char novamente;
    do
    {
        int jogada = 1;
        int ganhou = 0;
        printf(" Esse eh o modelo dos campos\n");
        printf("   1|2|3\n");
        printf("   4|5|6\n");
        printf("   7|8|9\n\n");

        char matriz[3][3] = {{'_', '_','_'}, {'_', '_','_'}, {'_', '_','_'}};
        do
        {
            printf("   %c|%c|%c\n",matriz[0][0],matriz[1][0],matriz[2][0]);
            printf("   %c|%c|%c\n",matriz[0][1],matriz[1][1],matriz[2][1]);
            printf("   %c|%c|%c\n",matriz[0][2],matriz[1][2],matriz[2][2]);
            int par = jogada % 2 == 0;
            if (par){
                joga(matriz, 'O');
                ganhou = verifica(matriz, 'O', 2);
            }
            else{
                joga(matriz, 'X');
                ganhou = verifica(matriz, 'X', 1);
            }
            jogada++;

        }while (ganhou == 0 && jogada != 10);

        printf("   %c|%c|%c\n",matriz[0][0],matriz[1][0],matriz[2][0]);
        printf("   %c|%c|%c\n",matriz[0][1],matriz[1][1],matriz[2][1]);
        printf("   %c|%c|%c\n",matriz[0][2],matriz[1][2],matriz[2][2]);
        
        if (ganhou == 0)
        {
            printf("\nDeu velha! ");
        }
        else if(ganhou == 1)
        {
            printf("\nO jogador X GANHOUU!!! ");
        }
        else if (ganhou == 2)
        {
            printf("\nO jogador O GANHOUU!!! ");
        }
        
        printf("Decida se quer jogar novamente [s/n]: ");
        scanf(" %c", &novamente);
    } while (novamente == 's');
}