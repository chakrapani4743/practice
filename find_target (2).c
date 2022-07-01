#if 0
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7},i = 0,j = 0,target;
	printf("Enter target  ele : ");
	scanf("%d",&target);
	int n = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (arr[i] + arr[j] == target)
			{
				printf("arr[%d] + arr[%d] == %d \n",i,j,target);
				return 1;
			}
		}
	}
}
#endif

#include<stdio.h>
int find_target(int *arr,int n,int target)
{
	int flag = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j ++)
		{
			if (arr[i] + arr[j] == target)
			{
				printf("arr[%d] + arr[%d] == %d",i,j,target);
				flag = 1;
			       return 1;
			}
		}
	}
	if (!flag)
	{
		printf("Invalid target(%d)\n",target);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7},target;
	printf("Enter target :");
	scanf("%d",&target);
        int n = sizeof(arr) /sizeof(arr[0]);
	int (*fptr)(int[],int,int);
	fptr = find_target;
	find_target(arr,n,target);
}

