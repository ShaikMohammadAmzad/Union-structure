#include<stdio.h>

union student
{
	char name[20];
	int regdno;
	float marks;	
}s1;

int main()
{
	s1.regdno=7131;
	
	printf("%d\n",s1.regdno);
	printf("size is %d",sizeof(s1));
	
	return 0;
}
