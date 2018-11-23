#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ip_no = 23, op_no = 0, i, temp;
    int mask_even, mask_odd, beven, bodd;
		
	mask_even = 0xAAAA;
	mask_odd = 0x5555;
	
	beven = mask_even & ip_no;
	bodd = mask_odd & ip_no;
	
	beven = beven >> 1;
	bodd = bodd << 1;
	
	op_no = beven | bodd;
	
	printf("\n%d",op_no);
	
	return 0;

}
