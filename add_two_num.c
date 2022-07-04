#include<stdio.h>
int main()
{
	int num1,num2;
	int *ptr1,*ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("Enter any two val: ");
	scanf("%d%d",ptr1,ptr2);
	int sum = *ptr1 + *ptr2;
	printf("%d",sum);
	return 0;
}
