#include<stdio.h>
#define SIZE 6
int main()
{

	int a[SIZE] = {1,4,3,5,2,7},i,j,temp,flag;
	for (i = 0;i < SIZE - 1;i++)   ///for passes
        {
		flag = 0;
	for (j = 0;j < SIZE - i - 1;j++)  // for comparing
	{
		if (a[j] > a[j + 1])     //check adjecent
		{
			temp = a[j];
			a[j] = a[j + 1];   //swap
			a[j + 1] = temp;
			flag = 1;
		}
	}
	if (flag == 0)
		break;
	}
	for (i = 0;i < SIZE;i++)
	{
		printf("%d",a[i]);
	}
	
}


