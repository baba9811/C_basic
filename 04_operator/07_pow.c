#include <stdio.h>
#include <math.h> // pow(), abs()

int main(void)
{
    double x = pow(2.0, 20.0); // 2.0의 20 제곱
    printf("2의 20제곱은 %.0f입니다.\n", x);
    return 0;
}