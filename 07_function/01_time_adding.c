#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ���� ����
int hour;
int minute;
int minuteAdd;

void counter()
{
    minute += minuteAdd;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
}

int main(void)
{
    char x = ':';
    printf("����� ����Դϱ�?");
    scanf("%d", &hour);
    printf("����� ����Դϱ�?");
    scanf("%d", &minute);
    printf("����� ���Ͻðڽ��ϱ�?");
    scanf("%d", &minuteAdd);
    counter();
    printf("%d�� %d��", hour, minute);
    
    return 0;
}