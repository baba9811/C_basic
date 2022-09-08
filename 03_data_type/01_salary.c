#include <stdio.h>
#define MONTHS 12

// c언어에는 str자료형이 없기 때문에 문자열을 사용할 때는 char 자료형을 연속적으로 사용해야함.

int main(void)
{
    double monthSalary = 1000.5;
    printf("$%.2f\n", monthSalary * MONTHS);
    return 0;
}