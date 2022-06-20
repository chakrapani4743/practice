#include<stdio.h>

struct student 
{
	int id;
	char name[10];
};

void print(struct student s)
{
	printf("%d %s\n",s.id,s.name);
}
int main()
{
	struct student s1 = {47,"Chakri"};
	print(s1);
	return 0;
}
