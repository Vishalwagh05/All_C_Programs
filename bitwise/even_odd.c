//Write a C program to check whether a number is even or odd using bitwise operator.


#include<stdio.h>
void even_odd(int);
void (*fp)(int)=even_odd;
void main()
{
        int num,bit;
        printf("Enter a number :");
        scanf("%d",&num);

        (*fp)(num);

}

void even_odd(int num)
{
        
       if(num&1)
	       printf("Given number is odd.\n");
	else
	       printf("Given number is Even.\n");

}
