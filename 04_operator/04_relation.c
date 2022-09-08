#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    // x가 y와 같은 값을 가지고 있는가?
    // x = y -> x와 y가 같은 상황 그 자체를 의미함.
    // x == y -> x와 y가 같은 값을 가지고 있는가를 의미함.
    printf("x와 y가 같은가? %d\n", x == y);
    printf("x가 y와 다른가? %d\n", x != y);
    printf("x가 y보다 큰가? %d\n", x > y);
    printf("x가 y보다 작은가? %d\n", x < y);
    printf("x에 y값을 넣으면? %d\n", x = y); // y의 값 30이 x에 할당되어 30이 출력됨.
    if (x == y)
    {
        // 조건식이 참일 경우 실행되는 부분
    }
    else
    {
        // 조건식이 참이 아닐 경우 실행되는 부분
    }
    return 0;
}