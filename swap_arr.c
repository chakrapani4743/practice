#include<stdio.h>
#define SIZE 5

int swap(int *arr1,int *arr2,int size)
{
	int i = 0;
	for (i = 0;i < size;i++)
	{
		*arr1 ^= *arr2;
		*arr2 ^= *arr1;
		*arr1 ^= *arr2;
		*arr1 ++;
		*arr2 ++;

	}
	printf("print arr1 elements : \n");
	for (i = 0;i < size;i++)
	{
		printf("%d ",*arr1++);
	}
	printf("print arr2 elements :\n");
	for (i = 0;i < size;i++)
	{
		printf("%d ",*arr2 ++);
	}
}

int main()
{
	int arr1[SIZE],arr2[SIZE],i = 0,j = 0;
	printf("Enter arr1 elements : ");
	for (i = 0;i < SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter arr2 elements : ");
	for (i = 0;i < SIZE;i++)
	{
		scanf("%d",&arr2[i]);
	}
	swap(arr1,arr2,SIZE);
}

