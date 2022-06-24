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
	struct sll *new = (struct sll*)malloc(sizeof(struct sll));
	if (new == NULL)
	{
		printf("Memry is not allocated\n");
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

void reverse(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
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
		printf("\nThe mid ele : %d",slow_ptr -> data);
	}
}

void loop_create(struct sll **head)
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
		struct sll *slow = *head;
		struct sll *fast = *head;
		while (slow != NULL && fast != NULL && fast -> link != NULL)
		{
			slow = slow -> link;
			fast = fast -> link -> link;
			if (slow == fast)
			{
				return 1;
			}
		}
		return 0;
	}
}

void delete_alter(struct sll **head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct sll *temp1 = NULL;
		struct sll *temp2 = *head;
		while (temp2 -> link != NULL)
		{
			temp1 = temp2 -> link;
			temp2 -> link = temp1;
			printf("Deleted ele : %d",temp1 -> data);
			free(temp1);
			temp2 = temp2 -> link;
		}
	}
}
int main()
{
	struct sll *head = NULL;
	int data,i = 0;
	while (i ++ < size)
	{
		printf("Enter data : \n");
		scanf("%d",&data);
		create_ll(&head,data);
	}
	print(&head);
	mid_ele(&head);
	reverse(&head);
	printf("\n\n");
	print(&head);
	loop_create(&head);
	int res = detect_loop(&head);
	if (res == 1)
	{
		printf("Loop is present\n");
	}
	else
	{
		printf("Loop is not present\n");
	}
	delete_alter(&head);

}



