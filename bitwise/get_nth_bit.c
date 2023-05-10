#include<stdio.h>
int get_nth_bit(int num,int bit);
int (*fp)(int,int)=get_nth_bit;
int main()
{
	int num,bit,result;
	printf("Enter a Number & Bit Position : ");
	scanf("%d%d",&num,&bit);
	result=fp(num,bit);
	printf("%d is present on %d bit position.",result,bit);
}

int get_nth_bit(int num,int bit)
{
	if(num&(1<<bit))
		return 1;
	else 
		return 0;
}


