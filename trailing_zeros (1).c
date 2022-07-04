#include<stdio.h>
#define size sizeof(int) * 8

int main()
{
	int num,i,count = 0;
	printf("Enter num val: ");
	scanf("%d",&num);
	for (i = 0;i < size;i++)
	{
		if ((num >> i) & 1)
		{
			break;
		}
		count ++;
	}
	printf("%d",count);
	return 0;
}
