
#include <stdio.h>
#include <stdlib.h>

int merge_sort(int *Array, int length);
int merge(int *Array, int length, int *left_array, int *right_array);

int main()
{
    printf ("\nMerge sort algorithm\n");
    
    int input_nos[5];
    int i, temp, j;
    
    printf ("\nEnter 5 numbers:");
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", &input_nos[i]);
    }
    
    merge_sort(input_nos, 5);
    
    printf("\nAnswer:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", input_nos[i]);
    }
    
    return 0;
}

int merge_sort(int *Array, int length)
{
    int i;
    int mid;
    int *left_array;
    int *right_array;
    
    mid = length / 2;
    
    if(length < 2)
    {
        return;
    }
    
    left_array = (int *) malloc(sizeof(int) * mid);
    right_array = (int *) malloc(sizeof(int) * (length - mid));
    
    for(i = 0; i < mid; i++)
    {
        left_array[i] = Array[i];
    }
    
    for(i = mid; i < length; i++)
    {
        right_array[i-mid] = Array[i];
    }
    
    merge_sort(left_array, mid);
    merge_sort(right_array, length - mid);
    merge(Array, length, left_array, right_array);
}

int merge(int *Array, int length, int *left_array, int *right_array)
{
    int i = 0, j = 0, k = 0;
    
    int mid = length / 2;
    
    while(i < mid && j < (length - mid))
    {
        if(left_array[i] < right_array[j])
        {
            Array[k] = left_array[i];
            i++;
        }
        else
        {
            Array[k] = right_array[j];
            j++;
        }
        k++;
    }
    
    while(i < mid)
    {
        Array[k] = left_array[i];
        i++;
        k++;
    }
    
    while(j < (length - mid))
    {
        Array[k] = right_array[j];
        j++;
        k++;
    }
    
    return 0;
}
