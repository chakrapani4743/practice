#include<stdio.h>
void count(char *str)
{
	int i = 0,word = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			word++;
		i++;
	}
	printf("Vowels present in str    : %d\n",word);
}

int main()
{
	char *str = "chakrapani reddy";
	void (*fptr)(char *) = &count;
	fptr(str);
	return 0;
}
