#include<stdio.h>
void toggle_bit(int num,int n)
{
	int num1 = num ^ (1 << n);
	printf("%d",num1);
}

int main()
{
	int num,n;
	printf("Enter num val:");
	scanf("%d",&num);
	printf("Enter n val: ");
	scanf("%d",&n);
	toggle_bit(num,n);
	return 0;
}
