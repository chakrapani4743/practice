#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

char ch = 65;
void *capital(void *ptr)
{
	while (ch <= 90)
	{
		printf("%c ",ch);
	//	ch ++;
		sleep(1);
	}
}
void *small(void *ptr)
{
	while (ch <= 90)
	{
		printf("%c ",ch + 32);
		ch ++;
		sleep(1);
	}
}

int main()
{
	printf("The process ID :%d ",getpid());
	pthread_t arr[2];
	pthread_create(&arr[0],NULL,capital,NULL);
	pthread_create(&arr[1],NULL,small,NULL);
	pthread_join(arr[0],NULL);
	pthread_join(arr[1],NULL);
}

