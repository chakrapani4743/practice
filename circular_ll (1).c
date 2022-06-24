#include<stdio.h>
#include<stdlib.h>
#define size 5
struct sll
{
	int data;
	struct sll *link;
};

void create_cll(struct sll **head,int data)
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
		if (*head == NULL)
		{
			*head = new;
			new -> link = *head;
		}
		else
		{
			struct sll *temp = *head;
			while (temp -> link != *head)
			{
				temp = temp -> link;
			}
			temp -> link = new;
			new -> link = *head;
		}
	}
}

void print(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *temp = *head;
		while (temp != *head)
		{
			printf("%d ",temp -> data);
			temp = temp -> link;
		}
	}
}

void check_cll(struct sll **head)
{
	if (*head == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		struct sll *temp = (*head) -> link;
		while (temp != NULL && temp != *head)
		{
			temp = temp -> link;
		}
		if (temp == *head)
		{
			printf("It is CIRCULAR\n");
		}
		else
		{
			printf("It is not CIRCULAR\n");
		}
	}
}


int main()
{
	struct sll *head = NULL;
	int i = 0,data;
	while (i ++ < size)
	{
		printf("Enter data : ");
		scanf("%d",&data);
		create_cll(&head,data);
	}
	check_cll(&head);
	//print(&head);
	return 0;
}
