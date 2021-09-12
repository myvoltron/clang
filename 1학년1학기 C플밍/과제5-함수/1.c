#pragma warning(disable:4996)
#include <stdio.h> 

int num_digit(int); //���� N�� ���ڸ����� ��� �մϴ�.

void convert_top(int, int); //���� ���� �� �ڸ����� ������ ���� ��ȯ�Ѵ�. �ڸ����� ���� ���� ������ 0�� ��ȯ�մϴ�.

void convert_bottom(int); //���� ���� �� �ڸ����� ������ ���� ��ȯ�Ѵ�. �ڸ����� ���� ���� ������ 0�� ��ȯ�մϴ�.

int main()
{
    int N, digit; //���� ����N , digit�� N�� �� �ڸ����� �����ϱ� ���ؼ� �����Ͽ���.
    scanf("%d", &N); //N�� ���� ������ �Է��մϴ�.

    digit = num_digit(N);

    if (digit % 2 != 0)
        convert_top(N, digit);
    else if (digit % 2 == 0)
        convert_bottom(N);
    return 0;
}

int num_digit(int a) //a�� N�� �޽��ϴ�.
{
    int i = 1, cnt = 0;
    while (1)
    {
        if (a / i == 0)
            break;
        i *= 10;
        cnt++;
    }

    return cnt; //������ cnt�� ��ȯ�մϴ�.
}


//���ڸ����� Ȧ���϶� ����Ǵ� �Լ��Դϴ�.
void convert_top(int a, int b) //a�� N�̰� b�� digit�� �޽��ϴ�.
{
    int i, cntdigit = 1, j = 10, k, save = 0, cnt = 0;
    char csave;
    for (i = 1; i < b; ++i)
    {
        cntdigit *= 10;
    }

    for (i = 0; i < b; ++i)
    {
        save = save + (a / cntdigit % 10) * j;
        cntdigit /= 10;
        cnt++;
        j /= 10;
        if (cnt == 2)
        {
            csave = (char)save;
            if ('a' <= csave && csave <= 'z')
            {
                printf("%c", csave);
            }
            else if ('A' <= csave && csave <= 'Z')
            {
                printf("%c", csave);
            }
            else
                printf("*");
            cnt = 0;
            save = 0;
            j = 10;
        }

        if (i == b - 1)
            break;
    }
    printf("*");
    return 0;
}


//���ڸ����� ¦���϶� ����Ǵ� �Լ��Դϴ�.
void convert_bottom(int a)
{
    int i = 1, j = 1, save = 0, cnt = 0;
    char csave;
    while (1)
    {
        if (a / i == 0)
            break;

        save = save + (a / i % 10) * j;
        cnt++;
        i *= 10;
        j *= 10;
        if (cnt == 2)
        {
            csave = (char)save;
            if ('a' <= csave && csave <= 'z')
            {
                printf("%c", csave);
            }
            else if ('A' <= csave && csave <= 'Z')
            {
                printf("%c", csave);
            }
            else
                printf("*");
            cnt = 0;
            save = 0;
            j = 1;
        }
    }
}