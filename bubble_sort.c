#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int length);

int main ()
{
    int array[] = {1, 4, 44, 8, 50, 34, 2, 9};
    int length = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, length);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int array[], int length)
{
    // for (int  i = 0; i < length - 1; i++)
    bool swapped = false;
    int numOfPasses = 0;
    do
    {
        swapped = false; // assumption no swaps are taken place
        for (int j = 0; j < (length - 1 - numOfPasses); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true; // a swap is taken place
            }
        }
        numOfPasses++;
    } while (swapped);
}