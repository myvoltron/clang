#include<stdio.h>

int main() {

    int a[100], i = 1, cnt = 0;
    scanf("%d", &a[i - 1]);
    printf("1");
    while (1)
    {
        scanf("%d", &a[i]); // 2 4 6 7 8 2 4 6 7 8 -1
        if (a[i] < 0) break;
        for (int j = 0; j < i; ++j)
        {
            if (a[j] == a[i])
            {
                cnt++;
            }
        }

        if (cnt > 0) printf("0");

        else if (cnt == 0) printf("1");

        cnt = 0;
        i++;
    }

    return 0;
}