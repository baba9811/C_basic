#include <stdio.h>

int main(void)
{
    char x = 'A';
    printf("%d\n", x); // char �ڷ����� �ϳ��� ���ڸ� ����. ���������� Ascii code 65 ���� ���������� ǥ��
    char y = 65;
    printf("%c\n", y); // ascii code 65 is 'A' so 'A' is printed on terminal.
    char z = 'B';
    printf("%d\n", z); // char 'b'�� �ƽ�Ű�ڵ� ���� 66�̹Ƿ� %d�� ����ϸ� 66�� ��µ�.
    return 0;
}