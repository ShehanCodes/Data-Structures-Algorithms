#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(int a, int b)
{
    if (a > b) 
        return -1;
    else
        return 1;
}
int absolute_compare(int a, int b)
{
    if(abs(a) > abs(b)) 
        return 1;
    else
        return -1;
}

void bubbleSort(int *a, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(a[j],a[j + 1]) > 0) // comapare a[j] with a[j + 1] and SWAP if needed
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, a[] = {3, 2, -1, -55, 6, 4};
    bubbleSort(a, 6, absolute_compare);

    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}