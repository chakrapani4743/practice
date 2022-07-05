#include<stdio.h>
#include<stdlib.h>

struct sll
{
	int data;
	struct sll *link;
};
void push(struct sll **top,int data)
{
	struct sll *new = (struct sll *)malloc(sizeof(struct sll));
	if (new == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new -> data = data;
		new -> link = NULL;
		if (*top == NULL)
		{
			*top = new;
		}
		else
		{
			new -> link = *top;
			*top = new;
		}
		printf("inserted elements %d \n",new -> data);
	}
}

void pop(struct sll **top)
{
	if (*top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		struct sll *temp = *top;
		*top = (*top) -> link;
		(*top) -> link = *top;
		printf("The poped element is %d\n",temp -> data);
		free(temp);
	}
}
int main()
{
	struct sll *top = NULL;
	push(&top,10);
	push(&top,20);
	push(&top,30);
	push(&top,40);
	push(&top,50);
	pop(&top);
	pop(&top);
	pop(&top);
}
