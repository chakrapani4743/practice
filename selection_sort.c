#include<stdio.h>
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int arr[] = {10,40,20,50,70,60,30},i,j,min;
	int n = sizeof (arr) / sizeof(arr[0]);
	for (i = 0;i < n - 1;i++)
	{
		min = i;
		for (j = i + 1;j < n;j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
	for (i = 0;i < n;i++)
	printf("%d ",arr[i]);
}
