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
// getchar() : ������ ���鹮�ڸ� �޾Ƴ�
// scanf("%�ڷ���", &����)
// scanf("%c", &����)���� enter�� �ϳ��� ���鹮�ڷ� �Է¹��� �� ����