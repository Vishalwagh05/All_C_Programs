 //Write a C program to rotate bits of a given number.
 


#include<stdio.h>
void rotate_bit(int*,int);
void print (int);
void (*fp)(int*,int)=rotate_bit;
void main()
{
        int num,bit;
        printf("Enter a number and bit :");
        scanf("%d%d",&num,&bit);

        print(num);

        (*fp)(&num,bit);

        print(num);
}

void rotate_bit(int* num,int bit)
{
        int temp=0;
        while(bit--)
	{
		temp=*num&1;
		*num=*num>>1;
		if(((*num>>31)&1)!=temp)
			*num^=(1<<31);
	}
       

}

void print(int a)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(a>>i)&1);
        }printf("\n");
}
