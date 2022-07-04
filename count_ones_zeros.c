#include<stdio.h>
#define size sizeof(int) * 8

int main()
{
	int num,ones = 0,zeros = 0,i;
	printf("enter num val : ");
	scanf("%d",&num);
	for (i = 0;i < size;i++)
	{
		if (num & 1)
			ones++;
		else
			zeros++;
		num >>= 1;
	}
	printf("ones  : %d\n",ones);
	printf("zeros : %d",zeros);
	return 0;
}

