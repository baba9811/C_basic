#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1/1 부터 현재까지 날짜 차이 구하기
int date_diff(int month,int day)
{
    int i, sum;
    sum = 0;
    for (i = 0; i <= month; i++)
    {
        if (i == 2)
        {
            sum += 31;
        }
        else if (i == 3)
        {
            sum += 28;
        }
        else if (i == 4)
        {
            sum += 31;
        }
        else if (i == 5)
        {
            sum += 30;
        }
        else if (i == 6)
        {
            sum += 31;
        }
        else if (i == 7)
        {
            sum += 30;
        }
        else if (i == 8)
        {
            sum += 31;
        }
        else if (i == 9)
        {
            sum += 31;
        }
        else if (i == 10)
        {
            sum += 30;
        }
        else if (i == 11)
        {
            sum += 31;
        }
        else if (i == 12)
        {
            sum += 30;
        }
    }
    return sum+day;
}


int main(void)
{
    int month, day, diff;
    printf("current month: ");
    scanf("%d", &month);
    printf("current day: ");
    scanf("%d", &day);
    diff = date_diff(month, day);
    printf("date difference is %d", diff);
    return 0;
}