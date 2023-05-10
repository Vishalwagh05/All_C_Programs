#include<stdio.h>
void flip_bit(int*);
void print (int*);
void (*fp[2])(int*)={print,flip_bit};
void main()
{
        int num;
        printf("Enter a number :");
        scanf("%d",&num);
        (*fp[0])(&num);
        (*fp[1])(&num);
        (*fp[0])(&num);
}

void flip_bit(int* a)
{
        int i,cnt=0;
        for(i=31;i>=0;i--)
        {
		if(((*a>>i)&1)==1)
			*a=*a&(~(1<<i));
		else
			*a=*a|(1<<i);

                        
        }

}

void print(int* a)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(*a>>i)&1);
        }printf("\n");
}

