#pragma warning(disable:4996)
#include <stdio.h> 

int count(int, int);

int main()
{
    int N, M; //N,M을 선언합니다.
    int save = 0;

    scanf("%d", &M); //M에는 한 자릿수 양의 정수를 입력합니다.

    while (1)
    {
        scanf("%d", &N);
        if (N < 0)  break; //음수가 입력되면 반복문을 탈출합니다.
        save += count(N, M);
    }
    printf("%d", save);

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