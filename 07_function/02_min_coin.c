#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//// x 1000, y 500, z 100
//int x, y, z, money;
//
//// 1000원 500원 100원으로 나누기
//void coin()
//{
//    x = money / 1000;
//    y = (money - x * 1000) / 500;
//    z = (money - x * 1000 - y * 500) / 100;
//
//}
//
//int main(void)
//{
//    printf("얼마를 거슬러줘야합니까?");
//    scanf("%d", &money);
//    coin();
//    printf("1000 %d 500 %d 100 %d", x, y, z);
//
//    return 0;
//}

// 특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수
int smallest(int number)
{
    int count = 0;
    while (number >= 50000)
    {
        number -= 50000;
        count++;
    }
    while (number >= 10000)
    {
        number -= 10000;
        count++;
    }
    while (number >= 5000)
    {
        number -= 5000;
        count++;
    }
    while (number >= 1000)
    {
        number -= 1000;
        count++;
    }
    while (number >= 500)
    {
        number -= 500;
        count++;
    }
    while (number >= 100)
    {
        number -= 100;
        count++;
    }
    while (number >= 50)
    {
        number -= 50;
        count++;
    }
    while (number >= 10)
    {
        number -= 10;
        count++;
    }
    return count;
}

int main(void)
{
    int remainder;
    printf("remainder?");
    scanf("%d", &remainder);
    int count  = smallest(remainder);
    printf("number of coins : %d", count);
    return 0;
}