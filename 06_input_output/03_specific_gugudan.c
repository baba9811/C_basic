#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, i, res;
    printf("what number?");
    scanf("%d", &x);
    for (i = 1; i < 10; i++)
    {
        res = x * i;
        printf("%d * %d = %d\n", x, i, res);
    }
    return 0;
}
// getchar() : 버퍼의 공백문자를 받아냄
// scanf("%자료형", &변수)
// scanf("%c", &변수)에서 enter도 하나의 공백문자로 입력받을 수 있음