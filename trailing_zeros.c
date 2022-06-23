#include<stdio.h>
int main()
{
	int input,count = 0;
	printf("Enter input val : ");
	scanf("%d",&input);
	while (!(input & 1))
	{
		count += 1;
		input >>= 1;
	}
	printf("%d",count);
	return 0;
}
