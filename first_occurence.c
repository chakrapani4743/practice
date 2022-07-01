#include<stdio.h>
void fst_occur(char *str,char key)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == key)
		{
			printf("index[%d]",i);
			break;
		}
		i++;
	}
}

int main()
{
	char str[] = "chakri",key;
	scanf("%c",&key);
	void (*fptr)(char [],char);
	fptr = fst_occur;
	fptr(str,key);
	return 0;
}
