#include<stdio.h>
void trail_zero(int);
void print (int);
void (*fp[2])(int)={print,trail_zero};
void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	(*fp[0])(num);
	(*fp[1])(num);
}

void trail_zero(int a)
{
	int i,cnt=0;
	for(i=0;i<=31;i++)
	{
		if(((a>>i)&1)==0)
			cnt++;
		else
			break;
	}
	printf("%d trail of zeroes\n",cnt);
	
}

void print(int a)
{
	for(int i=31;i>=0;i--)
	{
		printf("%d",(a>>i)&1);
	}printf("\n");
}
