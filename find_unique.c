/******************************************************************************

In a given array, every number appears twice except one.
Find the number in optimal way and calculate time complexity.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ip_nos[9];
    int i;
    long int temp = 0;
    
    printf("\nProgram to check the unique number");
    
    printf("\nEnter an array of 9 numbers: ");
    for(i = 0; i < 9; i++)
    {
        scanf("%d",&ip_nos[i]);
    }
    
    for(i = 0; i < 9; i++)
    {
        temp = temp ^ ip_nos[i];
    }
    
    printf("\nUnique number is: %ld", temp);
    
    return 0;
}
