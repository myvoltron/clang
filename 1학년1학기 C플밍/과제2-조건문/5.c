#include<stdio.h>

int main() {
    int a, b, c, d, e; // a,b,c,d,e 를 정수형으로 선언합니다.
    int max, min; //max와 min을 정수형으로 선언합니다.
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); //a,b,c,d,e에 숫자를 입력합니다.
    if (a >= b && a >= c && a >= d && a >= e) //만약 a >= b && a >= c && a >= d && a >= e 이라면 다음의 조건문을 실행합니다.
    {
        max = a; //max에 a를 대입합니다.
        if (b <= c && b <= d && b <= e) min = b; //만약 b <= c && b <= d && b <= e 이라면 min에 b를 대입합니다.
        else if (c <= b && c <= d && c <= e) min = c; //만약 c <= b && c <= d && c <= e 이라면 min에 c를 대입합니다.
        else if (d <= b && d <= c && d <= e) min = d; //만약 d <= b && d <= c && d <= e 이라면 min에 d를 대입합니다.
        else if (e <= b && e <= c && e <= d) min = e; //만약 e <= b && e <= c && e <= d 이라면 min에 e를 대입합니다.
    }
    else if (b >= a && b >= c && b >= d && b >= e) //만약 b >= a && b >= c && b >= d && b >= e이라면 다음의 조건문을 실행합니다.
    {
        max = b; //max에 b를 대입합니다.
        if (a <= c && a <= d && a <= e) min = a; //만약 a <= c && a <= d && a <= e 이라면 min에 a를 대입합니다.
        else if (c <= a && c <= d && c <= e) min = c; //만약 c <= a && c <= d && c <= e 이라면 min에 c를 대입합니다.
        else if (d <= a && d <= c && d <= e) min = d; //만약 d <= a && d <= c && d <= e 이라면 min에 d를 대입합니다.
        else if (e <= a && e <= c && e <= d) min = e; //만약 e <= a && e <= c && e <= d 이라면 min에 e를 대입합니다.
    }
    else if (c >= a && c >= b && c >= d && c >= e) //만약 c >= a && c >= b && c >= d && c >= e이라면 다음의 조건문을 실행합니다.
    {
        max = c; //max에 c를 대입합니다.
        if (b <= a && b <= d && b <= e) min = b; //만약 b <= a && b <= d && b <= e 이라면 min에 b를 대입합니다.
        else if (a <= b && a <= d && a <= e) min = a; //만약 a <= b && a <= d && a <= e 이라면 min에 a를 대입합니다.
        else if (d <= b && d <= a && d <= e) min = d; //만약 d <= b && d <= a && d <= e 이라면 min에 d를 대입합니다.
        else if (e <= b && e <= a && e <= d) min = e; //만약 e <= b && e <= a && e <= d 이라면 min에 e를 대입합니다.
    }
    else if (d >= a && d >= b && d >= c && d >= e) //만약 d >= a && d >= b && d >= c && d >= e이라면 다음의 조건문을 실행합니다.
    {
        max = d; //max에 d를 대입합니다.
        if (b <= c && b <= a && b <= e) min = b; //만약 b <= c && b <= a && b <= e 이라면 min에 b를 대입합니다.
        else if (c <= b && c <= a && c <= e) min = c; //만약 c <= b && c <= a && c <= e 이라면 min에 c를 대입합니다.
        else if (a <= b && a <= c && a <= e) min = a; //만약 a <= b && a <= c && a <= e 이라면 min에 a를 대입합니다.
        else if (e <= b && e <= c && e <= a) min = e; //만약 e <= b && e <= c && e <= a 이라면 min에 e를 대입합니다.
    }
    else if (e >= a && e >= b && e >= c && e >= d) //만약 e >= a && e >= b && e >= c && e >= d이라면 다음의 조건문을 실행합니다.
    {
        max = e; //max에 e를 대입합니다.
        if (b <= c && b <= a && b <= d) min = b; //만약 b <= c && b <= a && b <= d 이라면 min에 b를 대입합니다.
        else if (c <= b && c <= a && c <= d) min = c; //만약 c <= b && c <= a && c <= d 이라면 min에 c를 대입합니다.
        else if (a <= b && a <= c && a <= d) min = a; //만약 a <= b && a <= c && a <= d 이라면 min에 a를 대입합니다.
        else if (d <= b && d <= c && d <= a) min = d; //만약 d <= b && d <= c && d <= a 이라면 min에 d를 대입합니다.
    }
    printf("max: %d\n", max); //max를 출력합니다.
    printf("min: %d", min); //min을 출력합니다.
    return 0;
}