#include <stdio.h>

void printS(char string[])
{
    int c = 0;
    while (string[c] != '\0')
    {
        printf("%c", string[c]);
        c++;
    }
    printf("\n");
}

int lenS(char string[])
{
    int c = 0;
    while (string[c] != '\0') c++;
    return c;
}

char changename()
{
    char PlayerX[16] = "NOME DO JOGADOR X";
    int len = lenS(PlayerX);
    printf("Digite o novo nome: ");
    char name[16];
    scanf("%s", name);
    for (int i = 0; i < len; i++)
    {
        *(PlayerX+i) = name[i];
    }
    //printf("%s\n", PlayerX);
    return PlayerX;
}
int main()
{
    char nome[16];
    *nome = changename();
    printS(nome);
}
