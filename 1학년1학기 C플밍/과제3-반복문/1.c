#include<stdio.h>

int main() {

    int M, N, save, cnt = 0, sum = 0;
    scanf("%d %d", &M, &N); // ���� M,N �� ���ڸ� �Է��մϴ�.
    if (M > N) //���� M�� N���� ũ�ٸ� ���� ������� �����մϴ�.
    {
        save = N; //save�� N�� �����մϴ�.
        for (N; N <= M; ++N) //N�� M���� Ŭ������ ����������� �ݺ��մϴ�.
        {
            if (N % 2 == 0) //���� N%2 �� 0�̶��(��, 2�ǹ���϶�) ����������� �����մϴ�.
            {
                printf("%d ", N);
                cnt++; //cnt 1��ŭ ������ŵ�ϴ�.
                sum = sum + N; //sum�� sum+N�� �����մϴ�.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt�� sum�� ����մϴ�.
        N = save; //N�� save�� �����մϴ�.
        cnt = 0, sum = 0; //cnt, sum ������ 0�� �����մϴ�.
        printf("\n");
        for (N; N <= M; ++N) //N�� M���� Ŭ������ ����������� �ݺ��մϴ�.
        {
            if (N % 3 == 0)  //���� N%3 �� 0�̶��(��, 3�ǹ���϶�) ����������� �����մϴ�.
            {
                printf("%d ", N);
                cnt++; //cnt 1��ŭ ������ŵ�ϴ�.
                sum = sum + N; //sum�� sum+N�� �����մϴ�.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt�� sum�� ����մϴ�. 
    }
    else if (N > M) //���� N�� M���� ũ�ٸ� ���� ������� �����մϴ�.
    {
        save = M; //save�� M�� �����մϴ�.
        for (M; M <= N; ++M) //M�� N���� Ŭ������ ����������� �ݺ��մϴ�.
        {
            if (M % 2 == 0) //���� N%2 �� 0�̶��(��, 2�ǹ���϶�) ����������� �����մϴ�.
            {
                printf("%d ", M);
                cnt++; //cnt 1��ŭ ������ŵ�ϴ�.
                sum = sum + M;  //sum�� sum+N�� �����մϴ�.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt�� sum�� ����մϴ�.
        M = save;  //M�� save�� �����մϴ�.
        cnt = 0, sum = 0; //cnt, sum ������ 0�� �����մϴ�.
        printf("\n");
        for (M; M <= N; ++M) //M�� N���� Ŭ������ ����������� �ݺ��մϴ�.
        {
            if (M % 3 == 0) //���� N%3 �� 0�̶��(��, 3�ǹ���϶�) ����������� �����մϴ�.
            {
                printf("%d ", M);
                cnt++; //cnt 1��ŭ ������ŵ�ϴ�.
                sum = sum + M;  //sum�� sum+N�� �����մϴ�.
            }
        }
        printf("cnt=%d sum=%d", cnt, sum); //cnt�� sum�� ����մϴ�.
    }

    return 0;
}