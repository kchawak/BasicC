/******************************************************************************

Find jewels in a mixture of jewels and stones

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char* jewels = "ac";
    int count = 0, temp, i = 0, j;
    char* mix = "aaaAAAbbbb";
    int len_jewel = 0;
    
    printf("\nProgram to find the jewels in a mixture of stones and jewels");

    len_jewel = strlen(jewels);
    
    while(mix[i] != '\0')
    {
        for(j = 0; j < len_jewel; j++)
        {
            if(mix[i] == jewels[j])
            {
                count++;
            }
        }
        
        i++;
    }
    
    printf("\nNumber of jewels: %d", count);
    
    return 0;
}
