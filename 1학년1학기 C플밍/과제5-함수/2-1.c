#pragma warning(disable:4996)
#include <stdio.h> 

char decrypt(char, int);

int main()
{
    char ch[10];
    int M, i;

    for (i = 0; i < 10; ++i)
    {
        scanf("%c", &ch[i]);
    }

    scanf("%d", &M);

    for (i = 0; i < 10; ++i)
    {
        printf("%c", decrypt(ch[i], M));
    }
    return 0;
}

char decrypt(char ch, int M)
{
    M = M % 26;
    if ('a' <= ch && ch <= 'z')
    {
        return 'a' + (ch - 'a' + (char)(26 - M)) % 26;
    }

    else if ('A' <= ch && ch <= 'Z')
    {
        return 'A' + (ch - 'A' + (char)(26 - M)) % 26;
    }
    else
        return ch;
}