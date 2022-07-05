#include<stdio.h>
int main()
{
	int arr[] = {10,40,20,50,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n - 1;i++)
	{
		int min = i;
		for (int j = i + 1;j < n-1;j++)
		{
			if (arr[j] < arr[i])
				min = j;
		}
		if (min != i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	for (int i = 0;i < n;i++)
	printf("%d ",arr[i]);
}
