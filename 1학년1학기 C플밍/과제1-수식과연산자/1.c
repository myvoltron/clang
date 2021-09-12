#include<stdio.h>

int main() {

    char a; //이름이 a인 변수를 선언합니다.
    scanf("%c", &a); //a에 알파벳을 입력을 합니다.
    a = (a >= 'A' && a <= 'Z') ? a : a - 32; // 조건연산자로 만약 변수a가 'A'보다 크거나 같고 'Z'보다 작거나 같으면 그래도 a를 대입하고 아니라면 a-32를 대입합니다.
    printf("%c", a); //a를 출력합니다.

    return 0;
}