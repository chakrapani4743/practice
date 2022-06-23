#include<stdio.h>
int main()
{
	int num,place = 1,bin = 0,rem = 0;
	printf("Enter num val : ");
	scanf("%d",&num);
	while (num)
	{
		rem = num % 2;
		num = num / 2;
		bin = bin + (rem * place);
		place = place * 10;
	}
	printf("%d",bin);
	return 0;
}

