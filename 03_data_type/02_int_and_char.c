#include <stdio.h>

int main(void)
{
    char x = 'A';
    printf("%d\n", x); // char 자료형은 하나의 문자를 담음. 내부적으로 Ascii code 65 값을 문자형으로 표현
    char y = 65;
    printf("%c\n", y); // ascii code 65 is 'A' so 'A' is printed on terminal.
    char z = 'B';
    printf("%d\n", z); // char 'b'의 아스키코드 값이 66이므로 %d를 사용하면 66이 출력됨.
    return 0;
}