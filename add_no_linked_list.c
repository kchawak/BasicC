#include <stdio.h>
#include <stdlib.h>

struct huge_no
{
	int digit;
	struct huge_no *next;
};

void print_number(struct huge_no *n);
int store_number(struct huge_no **head, int digit);
struct huge_no* add_number(struct huge_no *n1, struct huge_no *n2);

int main()
{
	struct huge_no *huge1, *huge2, *sum;
	
	huge1 = (struct huge_no*) malloc (sizeof(struct huge_no));
	if(huge1 == NULL)
	{
	    printf("\nERROR malloc");
	    return 1;
	}
	
    huge2 = (struct huge_no*) malloc (sizeof(struct huge_no));
	if(huge2 == NULL)
	{
	    printf("\nERROR malloc");
	    return 1;
	}
		
	huge1->next = NULL;
	huge1->digit = 0;
	
	store_number(&huge1, 2);
	store_number(&huge1, 4);
	store_number(&huge1, 6);
	
	print_number(huge1);
	
	huge2->next = NULL;
	huge2->digit = 0;
	
	store_number(&huge2, 1);
	store_number(&huge2, 2);
	store_number(&huge2, 3);
	
	printf("\n");
	
	print_number(huge2);
	
	printf("\n----\n");
	
	sum = add_number(huge1, huge2);
	
	print_number(sum);
	
	return 0;
	
}

int store_number(struct huge_no **head, int digit)
{
	struct huge_no *node;
	node = (struct huge_no*) malloc (sizeof(struct huge_no));
	if(node == NULL)
	{
	    printf("\nERROR malloc");
	    return 1;
	}
	
	if(head == NULL)
	{
	    printf("\nERROR null pointer");
	    return 1;
	}
	
	node->digit = digit;
	node->next = *head;
	
	*head = node;

    return 0;	
}


void print_number(struct huge_no *n)
{

	while(n != NULL)
	{
		printf("%d",n->digit);
		n = n->next;
	}
}


struct huge_no* add_number(struct huge_no *n1, struct huge_no *n2)
{
    struct huge_no *sum, *prev1, *prev2;
    int temp, carry = 0;
    sum = (struct huge_no*) malloc (sizeof(struct huge_no));
    if(sum == NULL)
	{
	    printf("\nERROR malloc");
	    return 1;
	}
    
    if(n1 == NULL || n2 == NULL)
    {
        printf("ERROR null pointer");
        return 1;
    }
    
    while(n1 != NULL && n2 != NULL)
    {
    
        temp = n1->digit + n2->digit + carry;
        if(temp > 9)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
    
        store_number(&sum, temp);
    
        n1 = n1->next;
        n2 = n2->next;
    
    }
    
    return sum;
}
