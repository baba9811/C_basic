#include <stdio.h>
#include <limits.h> // �Ѱ谪�� �����ϴ� ���̺귯��

int main(void)
{
    int x = INT_MAX; // INT_MAX�� c���� �������� ���� �� �ִ� ���� ū ��
    printf("int���� �ִ� x�� %d�Դϴ�.\n", x);
    printf("x + 1�� %d�Դϴ�.", x + 1); // int���� ���� �� �ִ� �ּڰ� ��ȯ
    return 0;
}