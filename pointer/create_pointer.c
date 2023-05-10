/* Write a C program to create, initialize and use pointers. */

#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=NULL;

	ptr=&a;

	printf("%d",*ptr);
}
