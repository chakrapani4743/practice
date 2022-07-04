#include<stdio.h>
#define size sizeof(int) * 8

int main()
{
	int num,count = 0,i = 0;
	printf("Enter num val:");
	scanf("%d",&num);
	int msb = 1 << (size - 1);
	for (i = 0;i < size;i++)
	{
		if (msb & (num << i))
		{
			break;
		}
		count++;
	}
	printf("%d",count);
	return 0;
}


