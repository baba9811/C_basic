#include <stdio.h>
#define MONTHS 12

// c���� str�ڷ����� ���� ������ ���ڿ��� ����� ���� char �ڷ����� ���������� ����ؾ���.

int main(void)
{
    double monthSalary = 1000.5;
    printf("$%.2f\n", monthSalary * MONTHS);
    return 0;
}