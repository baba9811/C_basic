#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char o;
    int x, y;
    while (1)
    {
        printf("������ �Է��ϼ��� :");
        scanf("%d %c %d", &x, &o, &y);
        if (o == '+')
        {
            printf("%d %c %d = %d\n", x, o, y, x + y);
        }
        else if (o == '-')
        {
            printf("%d %c %d = %d\n", x, o, y, x - y);
        }
        else if (o == '*')
        {
            printf("%d %c %d = %d\n", x, o, y, x * y);
        }
        else if (o == '/')
        {
            printf("%d %c %d = %d\n", x, o, y, x / y);
        }
        else if (o == '%')
        {
            printf("%d %c %d = %d\n", x, o, y, x % y);
        }
        else
        {
            printf("�Է��� �߸��Ǿ����ϴ�.");
                break;
        }
        getchar(); // enter ó��
        printf("���α׷��� �����Ͻðڽ��ϱ�?(y/n)");
        char k;
        scanf("%c", &k);
        if (k == 'y')
        {
            printf("���α׷��� �����մϴ�.");
                break;
        }
        else if (k == 'n')
        {
            continue;
        }
        else
        {
            printf("�Է��� �߸��Ǿ����ϴ�.");
        }
    }
    return 0;
}