#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int iterator(struct node* n);
int add_node_to_start(struct node** head, int data);
int add_node_to_end(struct node** head, int data);
int delete_node(struct node** head, int data);

int main()
{
	struct node *node1, *node2, *node3;

	node1 = (struct node*) malloc (sizeof(struct node));
	node2 = (struct node*) malloc (sizeof(struct node));
	node3 = (struct node*) malloc (sizeof(struct node));
	
	node1->data = 1;
	node1->next = node2;

	node2->data = 2;
	node2->next = node3;

	node3->data = 3;
	node3->next = NULL;
	
	iterator(node1);	

	return 0;

}

int iterator(struct node* n)
{
	printf("\nThe data of the nodes are as follows:");
	while(n != NULL)
	{
		printf("\n%d",n->data);
		n = n->next;
	}
	return 0;
}

int add_node_to_start(struct node** head, int data)
{
	struct node *node_head;

	node_head = (struct node*) malloc (sizeof(struct node));

	node_head->data = data;

	node_head->next = *head;

	*head = node_head;

	return 0;
	
}

int add_node_to_end(struct node** head, int data)
{

	struct node *node_end, *n;

	node_end = (struct node*) malloc (sizeof(struct node));

	n = *head;

	while(n->next != NULL)
	{
		n = n->next;
	}
	node_end->data = data;
	n->next = node_end;
	node_end->next = NULL;

	return 0;
}

int delete_node(struct node** head, int data)
{

	struct node *n, *prev;

	n = *head;

	if(n->data == data && *head != NULL)
	{
		*head = n->next;
		free(n);
		return 0;
	}
	
	while(n != NULL && n->data != data)
	{
		prev = n;
		n = n->next;	
	}	
	if(n == NULL)
	{
		return 0;
	}
	prev->next = n->next;
	free(n);

}
