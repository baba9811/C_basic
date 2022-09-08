#include <stdio.h>

int main(void)
{
    int x;
    x = 5;
    printf("변수 x는 %d\n", x);
    printf("변수 x의 메모리 크기는 %d입니다.\n", sizeof(x)); // int 자료형은 4bytes
    return 0;
}