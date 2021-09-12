#pragma warning(disable:4996)
#include <stdio.h> 

int count(int, int);

int main()
{
    int N, M; //N,M을 선언합니다.

    scanf("%d %d", &N, &M); //N에는 양의정수를 입력하고 M에는 한 자릿수 양의 정수를 입력합니다.

    printf("%d", count(N, M));

    return 0;
}

int count(int N, int M)
{
    int i = 1, j;
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
