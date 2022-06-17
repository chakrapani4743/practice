#include<stdio.h>
int main()
{
	int arr[] = {11,5,7,2,3,4},target;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Enter target val:");
	scanf("%d",&target);
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (arr[i] + arr[j] == target)
			{
				printf("arr[%d] + arr[%d]\n",i,j);
			}
		}
	}
}
