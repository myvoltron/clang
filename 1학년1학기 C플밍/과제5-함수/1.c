#pragma warning(disable:4996)
#include <stdio.h> 

int num_digit(int); //정수 N의 총자릿수를 계산 합니다.

void convert_top(int, int); //가장 높은 두 자릿수를 제외한 수를 반환한다. 자릿수가 남은 것이 없으면 0을 반환합니다.

void convert_bottom(int); //가장 낮은 두 자릿수를 제외한 수를 반환한다. 자릿수가 남은 것이 없으면 0을 반환합니다.

int main()
{
    int N, digit; //양의 정수N , digit은 N의 총 자릿수를 저장하기 위해서 선언하였다.
    scanf("%d", &N); //N에 양의 정수를 입력합니다.

    digit = num_digit(N);

    if (digit % 2 != 0)
        convert_top(N, digit);
    else if (digit % 2 == 0)
        convert_bottom(N);
    return 0;
}

int num_digit(int a) //a는 N을 받습니다.
{
    int i = 1, cnt = 0;
    while (1)
    {
        if (a / i == 0)
            break;
        i *= 10;
        cnt++;
    }

    return cnt; //구해진 cnt를 반환합니다.
}


//총자릿수가 홀수일때 실행되는 함수입니다.
void convert_top(int a, int b) //a는 N이고 b는 digit을 받습니다.
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


//총자릿수가 짝수일때 실행되는 함수입니다.
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