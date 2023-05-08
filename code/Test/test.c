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

void changename(char Player[])
{
    printf("Digite o novo nome: ");
    scanf(" %[^\n]s", Player);
}

int main()
{
    char PlayerX[20] = "X";
    char PlayerO[20] = "O";

    changename(PlayerX);
    changename(PlayerO);
    printS(PlayerX);
    printS(PlayerO);

    return 0;
}
