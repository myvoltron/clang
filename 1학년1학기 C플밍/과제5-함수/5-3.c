#pragma warning(disable:4996)
#include <stdio.h> 

int add_digits(int);

int main()
{
    int N, save, min = 999999, saven;

    while (1)
    {
        scanf("%d", &N);
        save = N;
        if (N < 0) break;
        while (1)
        {
            if (N / 10 == 0) break;
            N = add_digits(N);
        }

        if (N < min)
        {
            saven = save;
            min = N;
        }
    }

    printf("%d %d", saven, min);
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