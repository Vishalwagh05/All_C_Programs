#include<stdio.h>
void lead_zero(int);
void print (int);
void (*fp[2])(int)={print,lead_zero};
void main()
{
        int num;
        printf("Enter a number :");
        scanf("%d",&num);
        (*fp[0])(num);
        (*fp[1])(num);
}

void lead_zero(int a)
{
        int i,cnt=0;
        for(i=31;i>=0;i--)
        {
                if(((a>>i)&1)==0)
                        cnt++;
                else
                        break;
        }
        printf("%d leading of zeroes\n",cnt);

}

void print(int a)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(a>>i)&1);
        }printf("\n");
}

