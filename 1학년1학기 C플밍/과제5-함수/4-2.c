#pragma warning(disable:4996)
#include <stdio.h> 

int count(int, int);

int main()
{
    int N, M; //N,M�� �����մϴ�.
    int save = 0;

    scanf("%d", &M); //M���� �� �ڸ��� ���� ������ �Է��մϴ�.

    while (1)
    {
        scanf("%d", &N);
        if (N < 0)  break; //������ �ԷµǸ� �ݺ����� Ż���մϴ�.
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