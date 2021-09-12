#pragma warning(disable:4996)
#include <stdio.h> 

int count(int, int);

int main()
{
    int N, M; //N,M을 선언합니다.
    int save = 0, i;
    int a[10] = { 0 };


    while (1)
    {
        scanf("%d", &N);
        if (N < 0)  break; //음수가 입력되면 반복문을 탈출합니다.

        for (i = 0; i < 10; ++i)
        {
            a[i] += count(N, i);
        }
    }

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int count(int N, int M)
{
    int i = 1;
    int save = N, cnt = 0;

    while (1)
    {
        if (N / i == 0)
            break;

        if (N / i % 10 == M)
            cnt++;
        i *= 10;
    }

    return cnt;
}
