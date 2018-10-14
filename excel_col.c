/******************************************************************************

Numerical representation of alphabetical column titles in excel

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char ip_col = 'A';
    int i, temp;
    int sum = 0;
    int j = 0;
    int length;
    
    printf("\nProgram for numerical representation of Excel columns");
    /*
    // TODO: enter string
    printf("\nEnter Excel column: ");
    for(i = 0; i < 9; i++)
    {
        scanf("%d",&ip_nos[i]);
    }
    */
    //length = strlen(ip_col);
    
    for(i = 1; i > 0; i--)
    {
        temp = ip_col - 'A';
        temp = temp + 1;
        temp = temp * pow(26,j);
        j = j + 1;
        sum = sum + temp;
    }
    
    printf("\nColumn number is: %d", sum);
    
    return 0;
}
