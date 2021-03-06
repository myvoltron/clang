#include<stdio.h>

int main() {

    unsigned int M, N; //0보다 큰 정수 M,N을 선언합니다.
    int cnt1 = 0, cnt2 = 0, i; //정수 cnt1, cnt2, i를 선업합니다.
    scanf("%d %d", &M, &N); //M,N에 숫자를 입력합니다.
    if (M <= N) //만약 N이 M보다 크거나 같다면 다음의 문장들을 실행합니다.
    {
        for (M; M <= N; ++M) //M이 N이랑 같아질 때까지 M을 1씩 증가시키면서 다음의 문장들을 반복합니다.
        {
            for (i = 1; i <= M; ++i) //i가 M이랑 같아질 때까지 i를 1씩 증가시키면서 다음의 문장들을 반복합니다.
            {
                if (M % i == 0) //만약 M을 i로 나눈 나머지가 0이라면(즉, i가 약수가 될때) 다음의 문장들을 실행합니다.
                {
                    cnt1++; //cnt1을 1증가시킵니다. (즉, 약수 개수를 구하는 것입니다.) 
                }
            }
            if (cnt1 % 2 == 0) //만약 cnt1을 2로 나눈 나머지가 0일때(즉, 약수 개수가 짝수가 될때) 다음의 문장들을 실행합니다.
            {
                cnt2++; //cnt2를 1증가시킵니다. (즉, 약수 개수가 짝수인 수의 개수를 구하는 것입니다.)
            }
            cnt1 = 0; //cnt1을 0으로 초기화시켜줍니다.
        }
        printf("%d", cnt2); //cnt2를 출력합니다.
    }
    else if (N <= M) //만약 M이 N보다 크거나 같다면 다음의 문장들을 실행합니다.
    {
        for (N; N <= M; ++N) //N이 M이랑 같아질 때까지 M을 1씩 증가시키면서 다음의 문장들을 반복합니다.
        {
            for (i = 1; i <= N; ++i) //i가 N이랑 같아질 때까지 i를 1씩 증가시키면서 다음의 문장들을 반복합니다.
            {
                if (N % i == 0) //만약 N을 i로 나눈 나머지가 0이라면(즉, i가 약수가 될때) 다음의 문장들을 실행합니다.
                {
                    cnt1++; //cnt1을 1증가시킵니다. (즉, 약수 개수를 구하는 것입니다.) 
                }
            }
            if (cnt1 % 2 == 0) //만약 cnt1을 2로 나눈 나머지가 0일때(즉, 약수 개수가 짝수가 될때) 다음의 문장들을 실행합니다.
            {
                cnt2++; //cnt2를 1증가시킵니다. (즉, 약수 개수가 짝수인 수의 개수를 구하는 것입니다.)
            }
            cnt1 = 0; //cnt1을 0으로 초기화시켜줍니다.
        }
        printf("%d", cnt2); //cnt2를 출력합니다.
    }

    return 0;
}