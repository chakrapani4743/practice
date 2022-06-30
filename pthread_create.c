#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *add()
{
	printf("Hello \nWe are learn to created thread\n");

	sleep(10);
}
int main()
{
	int ret;
	pthread_t t_id;
	ret = pthread_create(&t_id,NULL,add,NULL);
	if (ret == '\0')
	{
		printf("Thread is created successfully created\n");
	}
	else
	{
		printf("Thread is not created sucessfully\n");
	}
	pthread_join(t_id,NULL);
	printf("Thread is terminated\n");
}
