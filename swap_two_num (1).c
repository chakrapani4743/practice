#include<stdio.h>

void swap(int a,int b)
{
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("\nAfter swap : a = %d\tb = %d",a,b);
}

int main()
{
	int num1 = 10,num2 = 20;
	printf("Before swap : a = %d\tb = %d",num1,num2);
	swap(num1,num2);
	return 0;
}
