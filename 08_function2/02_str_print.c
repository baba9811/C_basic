#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����Լ�: ���� �Լ��� �ٽ� �Լ����� ȣ��
void print(int count)
{
    if (count == 0)
    {
        return;
    }
    else
    {
        printf("���ڿ��� ���\n");
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