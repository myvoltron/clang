#pragma warning(disable:4996)
#include <stdio.h> 
int multiple(int, int); //k의 배수인지 아닌지 판단하는 함수

int maximum(int, int); // 둘중 큰수 리턴하는 함수

int digit_maximum(int); //각 자릿수 계산 그리고 maximum함수로 그중에서 젤 큰값 리턴함.

int main()
{
    int N, M, K, i;
    int multiplesave, digitmax, lastsave;
    int max = -1, max1 = -1;
    int kingmax = 0;
    scanf("%d %d %d", &N, &M, &K);

    for (i = N; i <= M; ++i)
    {
        multiplesave = multiple(i, K);
        if (multiplesave == 1) //K의 배수이면
        {
            digitmax = digit_maximum(i);
            max = maximum(digitmax, max); //작동확인완료
        }

        else if (multiplesave == 0) //K의 배수가 아니라면
        {
            lastsave = i % K;
            max1 = maximum(lastsave, max1);
        }
    }

    kingmax = maximum(max, max1);
    printf("%d", kingmax);

    return 0;
}

int multiple(int x, int y) //k의 배수인지 아닌지 판단하는 함수
{
    if (x % y == 0)
        return 1;
    else
        return 0;
}

int digit_maximum(int x) //각 자릿수 계산 그리고 maximum함수로 그중에서 젤 큰값 리턴함.
{
    int max = -1;
    int i = 1, j, cnt;
    int save = x;
    while (1)
    {
        if (x / i == 0)
            break;

        save = x / i % 10;

        max = maximum(save, max);

        i *= 10;
    }
    return max;
}

int maximum(int x, int y) // 둘중 큰수 리턴하는 함수
{
    if (x >= y)
        return x;
    return y;
}