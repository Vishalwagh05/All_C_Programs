//Write a C program to swap two numbers using bitwise operator.

#include<stdio.h>
void swap(int*,int*);
void (*fp)(int*,int*)=swap;
void main()
{
        int num1,num2;
        printf("Enter a number1 and number2 :");
        scanf("%d%d",&num1,&num2);
	printf("\n before swaping\n num1= %d and num2= %d ",num1,num2);
        	
        (*fp)(&num1,&num2);
	printf("\n after swaping\n num1= %d and num2= %d ",num1,num2);


        
}

void swap(int* num1,int* num2)
{
        *num1^=*num2^=*num1^=*num2;
}
      
