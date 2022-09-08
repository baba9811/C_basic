#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 재귀함수: 같은 함수를 다시 함수에서 호출
void print(int count)
{
    if (count == 0)
    {
        return;
    }
    else
    {
        printf("문자열을 출력\n");
        print(count - 1);
    }
}

main()
{
    int count;
    printf("counts?");
    scanf("%d", &count);
    print(count);
}