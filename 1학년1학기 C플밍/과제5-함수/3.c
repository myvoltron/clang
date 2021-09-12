#pragma warning(disable:4996)
#include <stdio.h> 
int multiple(int, int); //k�� ������� �ƴ��� �Ǵ��ϴ� �Լ�

int maximum(int, int); // ���� ū�� �����ϴ� �Լ�

int digit_maximum(int); //�� �ڸ��� ��� �׸��� maximum�Լ��� ���߿��� �� ū�� ������.

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
        if (multiplesave == 1) //K�� ����̸�
        {
            digitmax = digit_maximum(i);
            max = maximum(digitmax, max); //�۵�Ȯ�οϷ�
        }

        else if (multiplesave == 0) //K�� ����� �ƴ϶��
        {
            lastsave = i % K;
            max1 = maximum(lastsave, max1);
        }
    }

    kingmax = maximum(max, max1);
    printf("%d", kingmax);

    return 0;
}

int multiple(int x, int y) //k�� ������� �ƴ��� �Ǵ��ϴ� �Լ�
{
    if (x % y == 0)
        return 1;
    else
        return 0;
}

int digit_maximum(int x) //�� �ڸ��� ��� �׸��� maximum�Լ��� ���߿��� �� ū�� ������.
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

int maximum(int x, int y) // ���� ū�� �����ϴ� �Լ�
{
    if (x >= y)
        return x;
    return y;
}