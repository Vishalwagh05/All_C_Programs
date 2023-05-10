#include<stdio.h>
int get_high_set_bit(int);
int (*fp)(int)=get_high_set_bit;
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	fp(num);
}
int get_high_set_bit(int num)
{
	int i;
	for(i=31;i>=0;i--)
	{
		if(num&(1<<i))
		{
			printf("%d highest set bit of number\n",i);
			return 0;
		}
	}
}



