#include<stdio.h>
#pragma pack(0)
struct student
{
	int id;
	char name[15];
	float marks;
};

void print(int id,char name[],float marks)
{
	printf("%d %s %2f\n",id,name,marks);
}

int main()
{
	struct student s1 = {43,"Veereshamma",85.7};
	print(s1.id,s1.name,s1.marks);
	printf("%ld\n",sizeof(s1));
	return 0;
}
