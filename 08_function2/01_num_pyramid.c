#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 반복함수 이용 숫자피라미드 출력
// for while로 구성
int print(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}

main()
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}