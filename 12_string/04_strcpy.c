#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = "I Love You";
    char result[10] = "Love";
    strcpy(result, input);
    printf("���ڿ� ����: %s\n", result);
    return 0;
}