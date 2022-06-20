#include<stdio.h>
#include<string.h>

struct student 
{
	int id;
	char name[20];
};
void print(struct student *s1)
{
	printf("%d %s\n",s1 -> id,s1 -> name);
}

int main()
{
	struct student s1;
	s1 . id = 47;
	strcpy(s1.name,"Chakri");
	print(&s1);
	return 0;
}
