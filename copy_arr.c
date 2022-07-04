#include<stdio.h>
int main()
{
	int s_arr[100],d_arr[100],i = 0,j = 0;	
	printf("Enter arr elements: ");
	for (i = 0;i < 6;i++)
	{
		scanf("%d",s_arr +i);
	}
	for (i = 0;i < 6;i++)
	{
		d_arr[i] = s_arr[i];
	}
	for(i = 0;i < 6;i++)
	{
		printf("%d ",d_arr[i]);
	}
	return 0;
}

