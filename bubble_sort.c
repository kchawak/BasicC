#include <stdio.h>

int main()
{
    printf ("\nBubble sort algorithm\n");
    
    int input_nos[5];
    int i, temp, j;
    
    printf ("\nEnter 5 numbers:");
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", &input_nos[i]);
    }
    
    for (j = 0; j < 5; j++)
    {
        for (i = 1; i < 5; i++)
        {
            if (input_nos[i-1] > input_nos[i])
            {
                temp = input_nos[i-1];
                input_nos[i-1] = input_nos[i];
                input_nos[i] = temp;
            }
        }
    }
    printf("\nAnswer:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", input_nos[i]);
    }
    
    return 0;
}
