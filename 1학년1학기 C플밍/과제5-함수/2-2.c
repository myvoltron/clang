#pragma warning(disable:4996)
#include <stdio.h> 

char decrypt(char, int);
char encrypt(char, int);
int main()
{
    char ch[1000];
    int M1, M2, i, cnt = 0;

    i = 0;
    while (1)
    {
        scanf("%c", &ch[i]);
        if (ch[i] == '*')
            break;
        i++;
        cnt++;
    }

    scanf("%d %d", &M1, &M2);

    for (i = 0; i < cnt; ++i)
    {
        printf("%c", decrypt(ch[i], M1));
    }

    printf("\n");

    for (i = 0; i < cnt; ++i)
    {
        printf("%c", encrypt((decrypt(ch[i], M1)), M2));
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

char encrypt(char ch, int M)
{
    M = M % 26;
    if ('a' <= ch && ch <= 'z')
    {
        return 'a' + (ch - 'a' + (char)M) % 26;
    }

    else if ('A' <= ch && ch <= 'Z')
    {
        return 'A' + (ch - 'A' + (char)M) % 26;
    }
    else
        return ch;
}