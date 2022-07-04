#include<stdio.h>
#define size sizeof(int) * 8
int main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);

	int msb = 1 << (size - 1);
	if (msb & num)
	{
		printf("msb is set");
	}else
		printf("msb unset");
}
