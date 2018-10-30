//
// Max profit question
// Author: Kalyani Chawak
//

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, bp = 0, bought = 0, profit = 0;
    int ip[6] = {7, 6, 4, 3, 1}; 
	
	
	for(i = 0; i < 5; i++)
	{
	    
	    if(bought)
	    {
	        if(ip[i] > ip[i+1])
	        {
	            printf("\nSelling stocks on Day %d", i);
	            profit += ip[i] - bp;
	            bought = 0;
	        }
	    }
	    else
	    {
	    if(ip[i+1] > ip[i])
	    {
	        printf("\nBuying stocks on Day %d", i);
	        bp = ip[i];
	        bought = 1;
	        
	    }
	    }
	}
	
	printf("\nMaximum profit = %d", profit);
	
	return 0;
}
