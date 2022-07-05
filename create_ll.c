#include<stdio.h>
#include<stdlib.h>
#define size 5

struct sll
{
	int data;
	struct sll *link;
};

void create_ll(struct sll **head,int data)
{
	struct sll *new = (struct sll *)malloc(sizeof(struct sll));
	if (new == NULL)
	{
		printf("Memery is not allocated\n");
	}
	else
	{
		new -> data = data;
		new -> link = NULL;
		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			struct sll *temp = *head;
			while (temp -> link != NULL)
			{
				temp = temp -> link;
			}
			temp -> link = new;
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
		while (temp != NULL)
		{
			printf("%d ",temp -> data);
			temp = temp -> link;
		}
	}
}

void rev_ll(struct sll **head)
{
	if (*head == NULL)
	{
		printf("Memry is not allocated \n");
	}
	else
	{
		struct sll *pre = NULL;
		struct sll *cur = *head;
		struct sll *next = NULL;
		while (cur != NULL)
		{
			next = cur -> link;
			cur -> link = pre;
			pre = cur;
			cur = next;
		}
		*head = pre;
	}
}

void mid_ele(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *fast_ptr = *head;
		struct sll *slow_ptr = *head;
		while (fast_ptr != NULL && fast_ptr -> link != NULL)
		{
			fast_ptr = fast_ptr -> link -> link;
			slow_ptr = slow_ptr -> link;
		}
		printf("\nThe mid element is : %d\n",slow_ptr -> data);
	}
}
void count_nodes(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		int count = 0;
		struct sll *temp = *head;
		while (temp != NULL)
		{
			count ++;
			temp = temp -> link;
		}
		printf("\nThe no.of nodes are : %d\n",count);
	}
}
void create_loop(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *temp = *head;
		while (temp -> link != NULL)
		{
			temp = temp -> link;
		}
		temp -> link = (*head) -> link;
	}
}

int detect_loop(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *temp1 = *head;
		struct sll *temp2 = *head;
		while(temp1 != NULL && temp2 != NULL && temp2 -> link != NULL)
		{
			temp1 = temp1 -> link;
			temp2 = temp2 -> link -> link;
			if (temp1 == temp2)
			{
				return 1;
			}
		}
		return 0;
	}
}

void insert_specific_pos(struct sll **head,int pos,int data)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *new = (struct sll *)malloc(sizeof(struct sll));
		if (new == NULL)
		{
			printf("Memry is not allocated\n");
		}
		else
		{
			new -> data = data;
			new -> link = NULL;
			if (pos < 0 || pos > size)
			{
				printf("INVALID");
			}
			else
			{
				struct sll *temp = *head;
				pos = pos - 1;
				while ((--pos) != '\0')
				{
					temp = temp -> link;
				}
				new -> link = temp -> link;
				temp -> link = new;
			}
		}
	}
}
					
int main()
{
	struct sll *head = NULL;
	int data,i = 0;
	while (i ++ < size)
	{
		printf("Enter data : ");
		scanf("%d",&data);
		create_ll(&head,data);
	}
	print(&head);
	rev_ll(&head);
	printf("\nAfter reverse\n");
	print(&head);
	mid_ele(&head);
	count_nodes(&head);
//	create_loop(&head);
	int res = detect_loop(&head);
	if (res == 1)
	{
		printf("Loop is created\n");
	}
	else
	{
		printf("Loop is not created\n");
	}
	int pos;
	printf("Enter pos : ");
	scanf("%d",&pos);
	printf("Enter data :");
        scanf("%d",&data);
	insert_specific_pos(&head,pos,data);
	print(&head);
}


