#include <stdio.h>

int main(void)
{
    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : -x;
    int max = (x > y) ? x : y;
    int min = (x > y) ? y : x;
    printf("x�� ������? %d\n", absoluteX);
    printf("x�� y �� ū����? %d\n", max);
    printf("x�� y �� ���� ����? %d\n", min);
    return 0;
}