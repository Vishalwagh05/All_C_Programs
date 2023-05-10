//Write a C program to count total zeros and ones in a binary number.

#include<stdio.h>
void cnt_zero_one(int*);
void print (int*);
void (*fp[2])(int*)={print,cnt_zero_one};
void main()
{
        int num;
        printf("Enter a number :");
        scanf("%d",&num);
        (*fp[0])(&num);
        (*fp[1])(&num);
}

void cnt_zero_one(int* a)
{
        int i,cntzero=0,cntone=0;
        for(i=31;i>=0;i--)
        {
                if(((*a>>i)&1)==1)
                        cntone++;
                else
                        cntzero++;
        }
	printf("%d Zeros & %d ones in binary.\n",cntzero,cntone);

}

void print(int* a)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(*a>>i)&1);
        }printf("\n");
}

