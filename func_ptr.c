#include<stdio.h>
#include<string.h>
void rev_str(char *name,int n)
{
	for (int i = n;i >= 0;i--)
	printf("%c",*(name + i));
}
int main()
{
	char name[] = "AMAR";
	int n = strlen(name);
//	printf("%d",n);
	void (*ptr)(char *,int n);
	ptr = rev_str;
	rev_str(name,n);
	return 0;
}
