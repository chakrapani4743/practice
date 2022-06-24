#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}que;

que *front = NULL;
que *rear = NULL;

void enque(int data)
{
	que *new  = (que *)malloc(sizeof(que));
	if (que == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new -> data = data;
		new -> link = NULL;
		if (front == rear == NULL)
		{
			front == rear == new;
		}
		else
		{
			rear -> link = new;
			new -> link = rear;
		}
	}
}

void display()
{
if (front == rear == NULL)
{
printf("Queue is empty\n");
}
	else
{
	que *temp = front;
	while (temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> data;
	}

}}
int main()
{
	enque(10);
	enque(20);
	enque(30);
	display();
}
