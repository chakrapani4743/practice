#include<stdio.h>
void str_cmp(char *str1,char *str2)
{
	int i = 0,j = 0,flag = 0;
	while (*str1 != '\0')
	{
	    if (*str1 == *str2)
	    {
		    str1++;
		    str2++;
	    }
	    else
	    {
		    flag = 1;
		    break;
	    }
	}
	if (!flag)
		printf("Both string are equal\n");
	else
		printf("Both string are not equal\n");

}



int main()
{
	char *str1 = "Chakri",*str2 = "Chakri";
	void (*fptr)(char *,char *);
	fptr = &str_cmp;
	fptr(str1,str2);
	return 0;
}
