#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �� ������ ���� ���� ��ȯ�ϴ� ������ �Լ�
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main(void)
{
    int x = 1;
    int y = 2;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}