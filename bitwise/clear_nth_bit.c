#include<stdio.h>
int clear_nth_bit(int *num,int bit);
void print(int num);
int (*fp)(int*,int)=clear_nth_bit;
int main()
{
       int num,bit;
       printf("Enter a number & bit position : ");
       scanf("%d%d",&num,&bit);
       print(num);
       fp(&num,bit);
       print(num);
}
int clear_nth_bit(int *num,int bit)
{
         *num=*num&(~(1<<bit));
}

void print(int num)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(num>>i)&1);
        }
        printf("\n");

}

