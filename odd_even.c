#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int num = 10;
void *even()
{
	while (num != 0 || num > 0)
	{
		if (num % 2 == 0)
		{
			printf("%d ",num);
			sleep(1);
		}
		num--;

	}
}
void *odd()
{
	while (num != 0 || num > 0)
	{
		if (num % 2 != 0)
		{
			printf("%d ",num);
			sleep(1);
		}
		num --;
	}
}

int main()
{
	pthread_t arr[2];
	pthread_create(&arr[0],NULL,even,NULL);
	pthread_create(&arr[1],NULL,odd,NULL);
	pthread_join(arr[0],NULL);
	pthread_join(arr[1],NULL);
}


