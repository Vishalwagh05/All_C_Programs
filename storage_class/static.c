#include<stdio.h>
static int result;
void sum(int a);
int main()
{
	int a=10;
	printf("Default value of a static variable is %d\n",result);
	sum(a);
	sum(a);
}

void sum(int a)
{
	result=result+a;
	printf("sum=%d\n",result);
}
