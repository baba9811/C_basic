// 복합대입연산자는 코드의 길이를 줄일 수 있다는 확실한 장점이 있음.

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("현재 x의 값은 %d입니다. \n", x);
    x += 50; // x = x + 50
    printf("현재 x의 값은 %d입니다.\n", x);
    x -= 50; // x = x -50
    printf("현재 x의 값은 %d입니다.\n", x);
    x *= 50;
    printf("현재 x의 값은 %d입니다.\n", x);
    x /= 50;
    printf("현재 x의 값은 %d입니다.\n", x);
    x %= 3;
    printf("현재 x의 값은 %d입니다.\n", x);
    return 0;
}