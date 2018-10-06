/******************************************************************************

Program to swap the even and odd bits in the number

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int ip_no;
    int mask_even = 0xAAAAAAAA;
    int mask_odd  = 0x55555555;
    int even,odd;
    int op_no;
    
    printf("\nProgram to swap the even and odd bits in a number");
    printf("\nEnter the number: ");
    scanf("%x", &ip_no);
    
    even = ip_no & mask_even;
    even = even >> 1;
    
    odd = ip_no & mask_odd;
    odd = odd << 1;
    
    op_no = odd | even;
    
    printf("\nOutput: %x", op_no);
    
    return 0;
}
