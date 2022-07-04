#include<stdio.h>
int main()
{
	int num;
	printf("Enter num :");
	scanf("%d",&num);
	if (num & 1)
	{
		printf("The given %d is Odd \n",num);
	}
	else
		printf("The given %d is Even \n",num);
	return 0;
}
