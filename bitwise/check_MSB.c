#include<stdio.h>
int check_MSB(int a);
int (*fp)(int a)=check_MSB;
int main()
{
	int num,result;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	result=fp(num);
	if(result==1)
		printf("MSB is set");
	else
		printf("MSB is not set");
}

int check_MSB(int a)
{
	int i;
	if((a&(1<<31)))
		return 1;
	else
		return 0;
}

