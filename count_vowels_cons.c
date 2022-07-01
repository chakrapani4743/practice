#include<stdio.h>
void count(char *str)
{
	int i = 0,vowel = 0,cons = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' ||  str[i] == 'e' ||str[i] == 'i'||str[i] ==  'o'||str[i] ==  'u')
			vowel++;
		else
			cons ++;
		i++;
	}
	printf("Vowels present in str    : %d\n",vowel);
	printf("Cononants present in str : %d\n",cons);
}

int main()
{
	char *str = "chakrapani";
	void (*fptr)(char *) = &count;
	fptr(str);
	return 0;
}
