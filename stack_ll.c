#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}sll;

sll *top = NULL;

void push(int x)
{
	sll *new = (sll *)malloc(sizeof(sll));
	if (new == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new -> data = x;
		new -> link = NULL;
		if (top == NULL)
		{
			top = new;
		}
		else
		{
			new -> link = top;
		       top = new;
		}
	}
}
void display()
{
	sll *temp = top;
	if (top == NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		while (temp  != NULL)
		{
			printf("Push data :%d \n",temp -> data);
			temp = temp -> link;
		}
	}
}
void peek()
{
	printf("\nThe top most element is  :%d\n",top -> data);
}
void pop()
{
	sll *temp = top;
	if (temp == NULL)
	{
		printf("Stackis empty\n");
	}
	else
	{
		top = top -> link;
		//temp -> link = top;
		printf("\npop data :%d \n",temp -> data);
		free(temp);
	}
}

int main()
{
	push(10);
	push(20);
	push(30);
	display();
	peek();
	pop();
	pop();
	display();
	//printf("%d",sizeof(sll));
}
