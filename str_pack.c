#include<stdio.h>
//#pragma pack(0) /// There is no packing done   size 12
// #pragma pack(1)  // Here strictly packed      size 09
//#pragma pack(-1)    // no packing done         size 12
#pragma pack(2)      // increased 1 bytre        size 10
struct student
{
	int id;
	char name;
	float marks;
};
int main()
{
	struct student s1;
	printf("%ld\n",sizeof(s1));
	return 0;
}
