// bubble sort
#include <stdio.h>

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : %d\n", i + 1, array[i]);
    }
}

void bubble_sort(int array[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, j, n;
    int array[] = {4, 8, 9, 3, 2, 0};
    n = 6;
    printf("unsorted array is :\n");
    print_array(array, n);
    bubble_sort(array, n);
    printf("\n");
    printf("sorted array is :\n");
    print_array(array, n);
    return 0;
}
