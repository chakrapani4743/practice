#include<stdio.h>
void fst_occur(char *str,char key)
{
	int i = 0,count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == key)
		{
			count ++;
		}
		i++;
	}
	printf("The occurence of char is :%d",count);
}

int main()
{
	char str[] = "chakrapani",key;
	scanf("%c",&key);
	void (*fptr)(char [],char);
	fptr = fst_occur;
	fptr(str,key);
	return 0;
}
