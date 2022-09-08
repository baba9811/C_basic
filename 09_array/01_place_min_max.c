#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define NUMBER 5 // 배열의 크기를 지정할 때 많이 사용



main()
{
    int i, max, min, index;
    int array[NUMBER]; // 크기가 5인 배열 선언
    // array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언
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
    printf("가장 큰 값은 %d입니다. %d번째에 있습니다.\n", max, index + 1);
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
    printf("가장 작은 값은 %d입니다. %d번째에 있습니다.\n", min, index + 1);

    return 0;
}