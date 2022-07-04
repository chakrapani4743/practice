#include<stdio.h>
int main()
{
	int num;
	printf("Enter num :");
	scanf("%d",&num);
	int flip_num = ~num;
	printf("Before flip : %d",num);
	printf("After flip  : %d",flip_num);
	return 0;
}
