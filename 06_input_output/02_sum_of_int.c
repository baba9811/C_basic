#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number, x, i, sum=0;
    printf("정수의 개수를 입력하세요 : ");
    scanf("%d", &number);
    for (i=0; i < number; i++)
    {
        printf("정수의 값을 입력하세요 : ");
        scanf("%d", &x);
        sum += x;
    }
    printf("% d개의 정수의 합은 % d입니다.", number, sum);
    return 0;
}