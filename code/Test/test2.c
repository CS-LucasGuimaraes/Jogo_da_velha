int lenS(char string[])
{
    int c = 0;
    while (string[c] != '\0') c++;
    return c;
}


int main(int argc, char const *argv[])
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
    printf("%s\n", PlayerX);
    return 0;
}