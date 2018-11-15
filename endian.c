// Convert little endian to big endian

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ip_no = 0x1234567, op_no = 0;
	int temp, i;
	
	int mask = 0xFF;
	
	for(i = 0; i < 4; i++)
	{
	    op_no = op_no << 8;
	    
		temp = ip_no & mask;
	
		ip_no = ip_no >> 8;
	
		op_no |= temp;
	
	}
	

	printf("\n%x",op_no);
	
    return 0;

}
	
