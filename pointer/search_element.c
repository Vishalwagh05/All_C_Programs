/* Write a C program to search an element in array using pointers. */

#include<stdio.h>

void search(int*,int,int);

int main()
{
        int arr1[10],n,num;

        printf("Enter a number of elements :");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
                printf("Enter a element : ");
                scanf("%d",&arr1[i]);
        }
	
	printf("Enter a number which you want to search : ");
	scanf("%d",&num);
        search(arr1,num,n);
}

void search(int *p1,int num,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(p1[i]==num)
		{
			printf("%d Number is found on %d index.\n ",p1[i],i);
			return;
		}
	}
	printf("Number is not present in givn array.\n");
}

