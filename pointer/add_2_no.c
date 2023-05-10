/*Write a C program to add two numbers using pointers.*/


#include<stdio.h>
int add(int *, int*);

int (*fp)(int*,int*)=add;

int main()
{
	int a,b,result;
	printf("Enter a two numbers \n");
	scanf("%d%d",&a,&b);
	
	result=fp(&a,&b);

	printf("add : %d\n",result);
}

int add(int *ptr1,int *ptr2)
{
	int sum;
	sum=*ptr1+*ptr2;
	return sum;
}
