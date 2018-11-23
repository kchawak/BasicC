#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 9, p1 = 0, p2 = 1, b1, b2;
	int op_no = 0, mask1, mask2;
	
	mask1 = 1 << p1;
	mask2 = 1 << p2;
	
	b1 = mask1 & n;
	b2 = mask2 & n;
	
	b2 = b2 >> p1;
	b1 = b1 << p2;
	
	n = n & ~(mask1);
	n = n & ~(mask2);
	
	op_no = n | b2;
	op_no = n | b1;
	
	printf("\n%d",op_no);

	return 0;
}