#include<stdio.h>

int main() {

    int N, i;
    int a[32000];

    scanf("%d", &N);

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }

    for (i = N - 1; i >= 0; --i)
    {
        printf(" %d", a[i]);
    }

    return 0;
}