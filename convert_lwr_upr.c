#include<stdio.h>

void lwr_upr(char str[])
{
	int i = 0;
	for (i = 0;str[i] != '\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		}
	}	
	printf("%s ",str);
}
int main()
{
	char str[] = "helllo world";
	void (*fptr)(char[]) = lwr_upr;
	fptr(str);
	return 0;
}
