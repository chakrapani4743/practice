#include<stdio.h>
int main()
{
	int arr[] = {50,20,10,40,30},j = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1;i < n;i++)
	{
		int temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
