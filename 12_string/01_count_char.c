#include <stdio.h>
/* 
���ڿ��� char �ڷ� Ÿ���� �迭.
�����Ϳ� ���ٰ� �� �� ����.
char �ڷ����� �����ϳ��� ����� 1����Ʈ. �ѱ� 2����Ʈ.
array[10]�� �� ����� 10����, �ѱ��� 5���� ���尡��.
�迭�� ���������� �����Ϳ� ����� ������ ������ ����.
*/


int main(void)
{
    char input[1001];
    gets(input);
    int count = 0;
    while (input[count] != NULL) {
        count++;
    }
    printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", count);
    printf("�Է��� ���ڿ��� : %s", input);
    return 0;
}