#include<stdio.h>

int main() {
    int a, b, c, d, e; // a,b,c,d,e �� ���������� �����մϴ�.
    int max, min; //max�� min�� ���������� �����մϴ�.
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); //a,b,c,d,e�� ���ڸ� �Է��մϴ�.
    if (a >= b && a >= c && a >= d && a >= e) //���� a >= b && a >= c && a >= d && a >= e �̶�� ������ ���ǹ��� �����մϴ�.
    {
        max = a; //max�� a�� �����մϴ�.
        if (b <= c && b <= d && b <= e) min = b; //���� b <= c && b <= d && b <= e �̶�� min�� b�� �����մϴ�.
        else if (c <= b && c <= d && c <= e) min = c; //���� c <= b && c <= d && c <= e �̶�� min�� c�� �����մϴ�.
        else if (d <= b && d <= c && d <= e) min = d; //���� d <= b && d <= c && d <= e �̶�� min�� d�� �����մϴ�.
        else if (e <= b && e <= c && e <= d) min = e; //���� e <= b && e <= c && e <= d �̶�� min�� e�� �����մϴ�.
    }
    else if (b >= a && b >= c && b >= d && b >= e) //���� b >= a && b >= c && b >= d && b >= e�̶�� ������ ���ǹ��� �����մϴ�.
    {
        max = b; //max�� b�� �����մϴ�.
        if (a <= c && a <= d && a <= e) min = a; //���� a <= c && a <= d && a <= e �̶�� min�� a�� �����մϴ�.
        else if (c <= a && c <= d && c <= e) min = c; //���� c <= a && c <= d && c <= e �̶�� min�� c�� �����մϴ�.
        else if (d <= a && d <= c && d <= e) min = d; //���� d <= a && d <= c && d <= e �̶�� min�� d�� �����մϴ�.
        else if (e <= a && e <= c && e <= d) min = e; //���� e <= a && e <= c && e <= d �̶�� min�� e�� �����մϴ�.
    }
    else if (c >= a && c >= b && c >= d && c >= e) //���� c >= a && c >= b && c >= d && c >= e�̶�� ������ ���ǹ��� �����մϴ�.
    {
        max = c; //max�� c�� �����մϴ�.
        if (b <= a && b <= d && b <= e) min = b; //���� b <= a && b <= d && b <= e �̶�� min�� b�� �����մϴ�.
        else if (a <= b && a <= d && a <= e) min = a; //���� a <= b && a <= d && a <= e �̶�� min�� a�� �����մϴ�.
        else if (d <= b && d <= a && d <= e) min = d; //���� d <= b && d <= a && d <= e �̶�� min�� d�� �����մϴ�.
        else if (e <= b && e <= a && e <= d) min = e; //���� e <= b && e <= a && e <= d �̶�� min�� e�� �����մϴ�.
    }
    else if (d >= a && d >= b && d >= c && d >= e) //���� d >= a && d >= b && d >= c && d >= e�̶�� ������ ���ǹ��� �����մϴ�.
    {
        max = d; //max�� d�� �����մϴ�.
        if (b <= c && b <= a && b <= e) min = b; //���� b <= c && b <= a && b <= e �̶�� min�� b�� �����մϴ�.
        else if (c <= b && c <= a && c <= e) min = c; //���� c <= b && c <= a && c <= e �̶�� min�� c�� �����մϴ�.
        else if (a <= b && a <= c && a <= e) min = a; //���� a <= b && a <= c && a <= e �̶�� min�� a�� �����մϴ�.
        else if (e <= b && e <= c && e <= a) min = e; //���� e <= b && e <= c && e <= a �̶�� min�� e�� �����մϴ�.
    }
    else if (e >= a && e >= b && e >= c && e >= d) //���� e >= a && e >= b && e >= c && e >= d�̶�� ������ ���ǹ��� �����մϴ�.
    {
        max = e; //max�� e�� �����մϴ�.
        if (b <= c && b <= a && b <= d) min = b; //���� b <= c && b <= a && b <= d �̶�� min�� b�� �����մϴ�.
        else if (c <= b && c <= a && c <= d) min = c; //���� c <= b && c <= a && c <= d �̶�� min�� c�� �����մϴ�.
        else if (a <= b && a <= c && a <= d) min = a; //���� a <= b && a <= c && a <= d �̶�� min�� a�� �����մϴ�.
        else if (d <= b && d <= c && d <= a) min = d; //���� d <= b && d <= c && d <= a �̶�� min�� d�� �����մϴ�.
    }
    printf("max: %d\n", max); //max�� ����մϴ�.
    printf("min: %d", min); //min�� ����մϴ�.
    return 0;
}