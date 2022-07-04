#include<stdio.h>
int main()
{
	int arr[100];
	int *ptr = arr;
	int n = 6;
	for (int i = 0;i < n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr = arr;
	for (int i = 0;i < n;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}
