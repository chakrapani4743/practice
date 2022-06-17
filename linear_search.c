#include<stdio.h>
#define N 7
int main()
{
	int arr[N] = {10,20,30,20,50,60,70},ele,found = 0;
	printf("Enter ele :");
	scanf("%d",&ele);
	for (int i = 0;i < N;i++)
	{
		if (arr[i] == ele)
		{
			printf("Element found at index arr[%d] ",i);
			found = 1;
			break;
		}
	}
	if (!found)
	{
		printf("Element is not found\n");
	}
	return 0;
}
