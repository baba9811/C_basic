#include <stdio.h>
#include <limits.h> // 한계값을 포함하는 라이브러리

int main(void)
{
    int x = INT_MAX; // INT_MAX는 c언어에서 정수형이 가질 수 있는 가장 큰 값
    printf("int형의 최댓값 x는 %d입니다.\n", x);
    printf("x + 1은 %d입니다.", x + 1); // int형이 가질 수 있는 최솟값 반환
    return 0;
}