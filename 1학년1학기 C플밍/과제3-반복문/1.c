#include<stdio.h>

int main() {

    int M, N, save, cnt = 0, sum = 0;
    scanf("%d %d", &M, &N); // 정수 M,N 에 숫자를 입력합니다.
    if (M > N) //만약 M이 N보다 크다면 다음 문장들을 실행합니다.
    {
        save = N; //save에 N을 대입합니다.
        for (N; N <= M; ++N) //N이 M보다 클때까지 다음문장들을 반복합니다.
        {
            if (N % 2 == 0) //만약 N%2 가 0이라면(즉, 2의배수일때) 다음문장들을 실행합니다.
            {
                printf("%d ", N);
                cnt++; //cnt 1만큼 증가시킵니다.
                sum = sum + N; //sum에 sum+N을 대입합니다.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt와 sum을 출력합니다.
        N = save; //N에 save를 대입합니다.
        cnt = 0, sum = 0; //cnt, sum 각각에 0을 대입합니다.
        printf("\n");
        for (N; N <= M; ++N) //N이 M보다 클때까지 다음문장들을 반복합니다.
        {
            if (N % 3 == 0)  //만약 N%3 가 0이라면(즉, 3의배수일때) 다음문장들을 실행합니다.
            {
                printf("%d ", N);
                cnt++; //cnt 1만큼 증가시킵니다.
                sum = sum + N; //sum에 sum+N을 대입합니다.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt와 sum을 출력합니다. 
    }
    else if (N > M) //만약 N이 M보다 크다면 다음 문장들을 실행합니다.
    {
        save = M; //save에 M을 대입합니다.
        for (M; M <= N; ++M) //M이 N보다 클때까지 다음문장들을 반복합니다.
        {
            if (M % 2 == 0) //만약 N%2 가 0이라면(즉, 2의배수일때) 다음문장들을 실행합니다.
            {
                printf("%d ", M);
                cnt++; //cnt 1만큼 증가시킵니다.
                sum = sum + M;  //sum에 sum+N을 대입합니다.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt와 sum을 출력합니다.
        M = save;  //M에 save를 대입합니다.
        cnt = 0, sum = 0; //cnt, sum 각각에 0을 대입합니다.
        printf("\n");
        for (M; M <= N; ++M) //M이 N보다 클때까지 다음문장들을 반복합니다.
        {
            if (M % 3 == 0) //만약 N%3 가 0이라면(즉, 3의배수일때) 다음문장들을 실행합니다.
            {
                printf("%d ", M);
                cnt++; //cnt 1만큼 증가시킵니다.
                sum = sum + M;  //sum에 sum+N을 대입합니다.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt와 sum을 출력합니다.
    }

    return 0;
}