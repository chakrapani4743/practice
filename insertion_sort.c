#include<stdio.h>
int main()
{
	int a[] = {2,1,4,3,6,5,7},temp,i=0,j=0;
	int n = sizeof(a) / sizeof(a[0]);
	for (i = 1;i < n;i++)
	{
		temp = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
	for (j = 0;j < n;j++)
	{
		printf("%d ",a[j]);
	}
}

