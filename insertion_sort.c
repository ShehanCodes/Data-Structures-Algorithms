#include <stdio.h>

void insertionSort(int array[], int length);

int main()
{
    int array[] = {1, 4, 44, 8, 50, 34, 2, 9};
    int length = sizeof(array)/sizeof(array[0]);

    insertionSort(array, length);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    return 0;
}

void insertionSort(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
