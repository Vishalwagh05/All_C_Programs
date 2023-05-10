/* Write a C program to swap two numbers using pointers. */

#include<stdio.h>
void swap(int*,int*);
void (*fp)(int*,int*)=swap;

int main()
{
	int a,b;
	int *ptr1,*ptr2;

	printf("Enter a two number :");
	scanf("%d%d",&a,&b);
	
	printf("a= %d  b=%d\n",a,b);
	ptr1=&a,ptr2=&b;
	
	fp(ptr1,ptr2);

	printf("a= %d  b=%d\n",a,b);
}

void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
