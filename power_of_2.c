#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ip_no = 6, op_no = 0, count = 0;
	
	while(ip_no != 0)
	{
        ip_no = ip_no >> 1;
        count++;
	}
	
	op_no = 1 << count;
	
	printf("%d",op_no);

	return 0;
}
