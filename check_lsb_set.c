#include<stdio.h>
int main()
{
	int num;
	printf("Enter numm :");
	scanf("%d",&num);
	if (num & 1)
	{
		printf("The given %d is set(1)",num);
	}
	else
	{
		printf("The given %d is unset(0)",num);
	}
}


