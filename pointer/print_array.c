/* Write a C program to input and print array elements using pointer. */

#include<stdio.h>
#include<stdlib.h>

void print(int*,int);
int main()
{
	int arr[10],i,n;
	printf("Enter a number of elements :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a element : ");
		scanf("%d",&arr[i]);
	}

	print(&(*arr),n);

}

void print(int *ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}

