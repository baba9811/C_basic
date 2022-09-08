#include <stdio.h>

int main(void)
{
    int x = 50;
    float y = 123456789.123456789; // float은 4바이트에 해당하는 범위만 표현가능
    double z = 123456789.123456789;
    printf("x = %d\ny=%.2f\n", x, y);
    printf("x = %d\ny=%f\n", x, z);

    return 0;
}