#pragma warning(disable:4996)
#include <stdio.h> 

int add_digits(int);

int main()
{
    int N;
    scanf("%d", &N);

    while (1)
    {
        if (N / 10 == 0) break;
        N = add_digits(N);
    }

    printf("%d", N);

    return 0;
}

int add_digits(int N)
{
    int i = 1;
    int save = 0;
    while (1)
    {
        if (N / i == 0)  break;
        save += N / i % 10;
        i *= 10;
    }

    return save;
}