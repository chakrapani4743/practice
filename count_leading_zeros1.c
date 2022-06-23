#include<stdio.h>
#define NUM_BITS 8
#define MSB_BIT (1 << (NUM_BITS - 1))
int main()
{
	int input ,count = 0;
	printf("Enter inputtt val : ");
	scanf("%d",&input);
	while (! (input & MSB_BIT))
	{
		count += 1;
		input <<= 1;
	}
	printf("%d",count);
	return 0;
}

