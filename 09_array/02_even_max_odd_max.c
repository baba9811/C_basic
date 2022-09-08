#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 5

main()
{
    int array[NUMBER];
    int i, oddMax, evenMax;
    oddMax = evenMax = 0;
    for (i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            if (evenMax < array[1])
            {
                evenMax = array[i];
            }
        }
        if (array[i] % 2 == 1)
        {
            if (oddMax < array[i])
            {
                oddMax = array[i];
            }
        }
    }
    printf("even_max:%d\nodd_max:%d", evenMax, oddMax);
}