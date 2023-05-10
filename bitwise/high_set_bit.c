#include<stdio.h>
int high_set_bit(int num);
int main()
{
       int num;
       printf("Enter a number : ");
       scanf("%d",&num);
       high_set_bit(num);
}
int high_set_bit(int num)
{
	int highcnt=0,i,lowcnt=0;
        for(i=31;i>=0;i--)
	{
		if((num&(1<<i)))
			lowcnt++;
		else
		{
			if (highcnt<=lowcnt)
			{
				highcnt=lowcnt;
				lowcnt=0;
			}
		}
	}
	printf("hightest set one is %d ",highcnt);
	
}
