#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 전역 변수
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
    printf("현재는 몇시입니까?");
    scanf("%d", &hour);
    printf("현재는 몇분입니까?");
    scanf("%d", &minute);
    printf("몇분을 더하시겠습니까?");
    scanf("%d", &minuteAdd);
    counter();
    printf("%d시 %d분", hour, minute);
    
    return 0;
}