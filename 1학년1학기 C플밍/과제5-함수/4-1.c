#pragma warning(disable:4996)
#include <stdio.h> 

int count(int, int);

int main()
{
    int N, M; //N,M�� �����մϴ�.

    scanf("%d %d", &N, &M); //N���� ���������� �Է��ϰ� M���� �� �ڸ��� ���� ������ �Է��մϴ�.

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
