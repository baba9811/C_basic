#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char o;
    int x, y;
    while (1)
    {
        printf("수식을 입력하세요 :");
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
            printf("입력이 잘못되었습니다.");
                break;
        }
        getchar(); // enter 처리
        printf("프로그램을 종료하시겠습니까?(y/n)");
        char k;
        scanf("%c", &k);
        if (k == 'y')
        {
            printf("프로그램을 종료합니다.");
                break;
        }
        else if (k == 'n')
        {
            continue;
        }
        else
        {
            printf("입력이 잘못되었습니다.");
        }
    }
    return 0;
}