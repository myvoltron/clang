#include<stdio.h>

int main() {

    int N, i, c = 0, d = 0, save, j = 0, k = 0; // save�� N�� ��������� ����.
    int a[2000] = { 0 }, max[2000] = { 0 }, min[2000] = { 0 };
    int maxc, mind, maxsave, minsave;
    int cnt = 0, cnt1 = 0, cnt2 = 0;

    scanf("%d", &N);

    if (N < 0)
        cnt2++;

    save = N; // save�� N������ �ʱ�ȭ ��Ų��.

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);   //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 21
    }

    for (i = N - 1; i >= 0; --i)
    {
        if (cnt2 == 1)
            break;
        printf(" %d", a[i]);
    }//4-1 ��

    printf("\n");
    //4-2 ����
    if (N % 3 == 0) // �Էµ� ������ ������ 3���� ������ ������.
    {
        for (i = 0; i < N / 3 - 1; i++)
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2])
            {
                max[c++] = a[j];
                if (a[j + 1] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j + 1] <= a[j + 2])
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2])
            {
                max[c++] = a[j + 1];
                if (a[j] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j] <= a[j + 2])
                    min[d++] = a[j];
            }

            else if (a[j + 2] >= a[j + 1] && a[j + 2] >= a[j])
            {
                max[c++] = a[j + 2];
                if (a[j + 1] >= a[j])
                    min[d++] = a[j];
                else if (a[j + 1] <= a[j])
                    min[d++] = a[j + 1];
            }

            j += 3;
        }

        if (a[j] >= a[j + 1] && a[j] >= a[j + 2])
        {
            max[c++] = a[j];
            if (a[j + 1] >= a[j + 2])
                min[d++] = a[j + 2];
            else if (a[j + 1] <= a[j + 2])
                min[d++] = a[j + 1];
        }

        else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2])
        {
            max[c++] = a[j + 1];
            if (a[j] >= a[j + 2])
                min[d++] = a[j + 2];
            else if (a[j] <= a[j + 2])
                min[d++] = a[j];
        }

        else if (a[j + 2] >= a[j + 1] && a[j + 2] >= a[j])
        {
            max[c++] = a[j + 2];
            if (a[j + 1] >= a[j])
                min[d++] = a[j];
            else if (a[j + 1] <= a[j])
                min[d++] = a[j + 1];
        }
    }

    else if (N % 3 == 1) // �Էµ� ������ ������ 3���� �����ٰ� 1���� ���� ���
    {
        for (i = 0; i < N / 3; i++)
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2])
            {
                max[c++] = a[j];
                if (a[j + 1] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j + 1] <= a[j + 2])
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2])
            {
                max[c++] = a[j + 1];
                if (a[j] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j] <= a[j + 2])
                    min[d++] = a[j];
            }

            else if (a[j + 2] >= a[j + 1] && a[j + 2] >= a[j])
            {
                max[c++] = a[j + 2];
                if (a[j + 1] >= a[j])
                    min[d++] = a[j];
                else if (a[j + 1] <= a[j])
                    min[d++] = a[j + 1];
            }

            j += 3;
        }

        max[c++] = a[j];
        min[d++] = a[j];
    }

    else if (N % 3 == 2) // �Էµ� ������ ������ 3���� �����ٰ� 2���� ���� ���
    {
        for (i = 0; i < N / 3; i++)
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2])
            {
                max[c++] = a[j];
                if (a[j + 1] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j + 1] <= a[j + 2])
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2])
            {
                max[c++] = a[j + 1];
                if (a[j] >= a[j + 2])
                    min[d++] = a[j + 2];
                else if (a[j] <= a[j + 2])
                    min[d++] = a[j];
            }

            else if (a[j + 2] >= a[j + 1] && a[j + 2] >= a[j])
            {
                max[c++] = a[j + 2];
                if (a[j + 1] >= a[j])
                    min[d++] = a[j];
                else if (a[j + 1] <= a[j])
                    min[d++] = a[j + 1];
            }

            j += 3;
        }

        if (a[j] >= a[j + 1])
        {
            max[c++] = a[j];
            min[d++] = a[j + 1];
        }

        else if (a[j] <= a[j + 1])
        {
            max[c++] = a[j + 1];
            min[d++] = a[j];
        }
    }

    // 4-2 max�迭�� min �迭 ���ϱ� �� ���� ��¸� �ϸ� ��.

    for (i = 0; i < c; ++i)
    {
        if (cnt2 == 1)
            break;
        printf(" %d", max[i]);     //max�迭 ���
    }

    printf("\n");

    for (i = 0; i < d; ++i)
    {
        if (cnt2 == 1)
            break;
        printf(" %d", min[i]);     //min�迭 ���
    }

    return 0;
}