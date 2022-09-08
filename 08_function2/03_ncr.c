#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 재귀함수로 조합 구현
int nCr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", nCr(n, r));
    return 0;
}