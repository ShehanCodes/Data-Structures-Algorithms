#include <stdio.h>

int main()
{
    int array[] = { 4, 8, 2, 67, 43, 7, 0, 3, 9, 1};
    int length = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < length - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[min_pos])
                min_pos = j;
        }
        if (min_pos != i)
        {
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}