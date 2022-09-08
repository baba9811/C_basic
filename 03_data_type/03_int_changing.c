#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("10진수로 출력 : %d\n", x);
    printf("8진수로 출력 : %o\n", x); // %o 8진수 place holder
    printf("16진수로 출력 : %x\n", x); // %x 16진수 place holder

    // int 자료형은 출력 양식에 따라 여러 진수로 변환 가능함.
}