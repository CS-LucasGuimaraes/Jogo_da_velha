#include <stdio.h>

void prints(char string[])
{
    int c = 0;
    while (string[c] != '\0')
    {
        printf("%c\n", string[c]);
        c++;
    }
}


void changename(char *name[])
{
    //*name[0] = 'K';
    //printf("%s\n", nomeantigo);
//    *name = "Outro nome";
  //  printf("%s\n", *name);
}

int main()
{
    char PlayerX[] = "NOME DO JOGADOR X";
    changename(&PlayerX);
    printf("%s\n", PlayerX);
}
