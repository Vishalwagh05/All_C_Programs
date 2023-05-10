//Write a C program to swap even and odd bits.

#include<stdio.h>
void swap_even_odd(int*);
void print (int);
void (*fp)(int*)=swap_even_odd;
void main()
{
        int num,bit;
        printf("Enter a number :");
        scanf("%d%d",&num);

        print(num);

        (*fp)(&num);

        print(num);
}

void swap_even_odd(int* num,)
{
        int i,j;
	for(i=31,j=30;i>=0;i--,j--)
	{
		if(((*num>>i)&1)==((*num>>j)&1))
		{
			j--;
			i--;
		}
		else
		{
			if(((*num>>i)&1)==1)
			{






}

void print(int a)
{
        for(int i=31;i>=0;i--)
        {
                printf("%d",(a>>i)&1);
        }printf("\n");
}

