#include <stdio.h>

int main(void)
{
    int x = 50;
    float y = 123456789.123456789; // float�� 4����Ʈ�� �ش��ϴ� ������ ǥ������
    double z = 123456789.123456789;
    printf("x = %d\ny=%.2f\n", x, y);
    printf("x = %d\ny=%f\n", x, z);

    return 0;
}