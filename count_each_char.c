#include<stdio.h>
void count_char(char *str)
{
	int i = 0,alphabet = 0,spl = 0,dig = 0;
	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			alphabet++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			dig ++;
		}
		else
		{
			spl++;
		}i++;
	}
	printf("The total no.of alphbets : %d\n",alphabet);
	printf("The total no.of digits   : %d\n",dig);
	printf("The total no.of speacial : %d\n",spl);
}

int main()
{
	char *str = "chakrapani906@gmai.com";
	void (*fptr)(char *str) = count_char;
	fptr(str);
	return 0;
}
