#include<stdio.h>
int check_LSB(int a);
int (*fp)(int a)=check_LSB;

int main()
{
	int num,result;
	printf("Enter a number : ");
	scanf("%d",&num);
	result=fp(num);
	if(result==1)
		printf("LSB is set.");
	else
		printf("LSB is not set.");
}

int check_LSB(int a)
{
	if(a&1==1)
		return 1;
	else
		return 0;
}

