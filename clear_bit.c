#include<stdio.h>
void  clear_bit(int num,int n)
{
	int num1 = num & ~(1 << n);
	printf("%d",num1);
}
int main()
{
	int num,n;
	printf("Entercnum val :");
	scanf("%d",&num);
	printf("Enter n val :");
	scanf("%d",&n);
	clear_bit(num,n);
	return 0;
}
