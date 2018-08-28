// Program to check whether two strings are permutations of each other

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ips1[100], ips2[100];
    int ans = 0;
    int i,j,len1,len2;
    int x, count1[26] = {0}, count2[26] = {0};
    
    printf("\nEnter string 1: ");
    scanf("%s", ips1);
    printf("\nEnter string 2: ");
    scanf("%s", ips2);
    
    len1 = strlen(ips1);
    len2 = strlen(ips2);
    
    if(len1 == len2)
    {
        for(i=0;i<len1;i++)
        {
            if(ips1[i] >= 'a' && ips1 <= 'z')
            {
                x = ips1[i] - 'a';
                count1[i]++;
            }
            if(ips2[i] >= 'a' && ips2 <= 'z')
            {
                x = ips2[i] - 'a';
                count2[i]++;
            }
        }
        
        for(i=0;i<26;i++)
        {
            if(count1[i] != count2[i])
            {
                ans = 1;
            }
        }
    }
    else
    {
        ans = 1;
    }
    
    if(ans == 0)
    {
        printf("\nThe strings are permutations of each other");
    }
    else
    {
        printf("\nThe strings are not permutations of each other");
    }

    return 0;
}