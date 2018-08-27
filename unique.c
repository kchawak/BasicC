#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ip_string[100];
    int i,j;
    int ans=0;
    int len;
    
    printf("\nEnter a string: ");
    scanf("%s", ip_string);
    
    len = strlen(ip_string);
    
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(ip_string[i] == ip_string[j])
            {
                ans = 1;
                break;
            }
        }
    }
    
    if(ans == 0)
    {
        printf("\nString is unique");
    }
    else if (ans == 1)
    {
        printf("\nString is not unique");
    }

    return 0;
}