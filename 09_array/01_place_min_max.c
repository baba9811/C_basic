#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define NUMBER 5 // �迭�� ũ�⸦ ������ �� ���� ���



main()
{
    int i, max, min, index;
    int array[NUMBER]; // ũ�Ⱑ 5�� �迭 ����
    // array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 ����
    max = index = 0;
    for (i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if (max < array[i])
        {
            max = array[i];
            index = i;

        }
    }
    printf("���� ū ���� %d�Դϴ�. %d��°�� �ֽ��ϴ�.\n", max, index + 1);
    min = INT_MAX;
    for (i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if (min > array[i])
        {
            min = array[i];
            index = i;
        }
    }
    printf("���� ���� ���� %d�Դϴ�. %d��°�� �ֽ��ϴ�.\n", min, index + 1);

    return 0;
}