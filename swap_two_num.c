#include<stdio.h>
int swap(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{
	int num1,num2;
	printf("Enter any two val:");
	scanf("%d%d",&num1,&num2);
	swap(&num1,&num2);
	printf("after swap :num1 = %d\t,num2 = %d",num1,num2);
	return 0;

}
