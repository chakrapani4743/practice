#include<stdio.h>
int miss_ele(int arr[],int n)
{
	int total;
	total = (n + 1) * (n + 2) / 2;
	for (int i = 0;i < n;i++)
	{
		total -=  arr[i];
	}
	return total;
}

int main()
{
	int size;
	printf("Enter size val :\n");
	scanf("%d",&size);
	int arr[size],i = 0;
	int *ptr = arr;
	for (i = 0;i < size;i++)
	scanf("%d",ptr + i);
	printf("The missing element is : %d\n",miss_ele(arr,size));
	return 0;
}
