/* Write a C program to copy one array to another using pointers. */


#include<stdio.h>

void copy(int *,int *,int);
void print(int*,int*,int);

int main()
{
	int arr1[10],arr2[10],n;
	int *p1,*p2;

	p1=arr1;
	p2=arr2;

	printf("Enter a number of elements :");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
                printf("Enter a element : ");
                scanf("%d",&arr1[i]);
        }

	copy(p1,p2,n);
	print(p1,p2,n);
}

void copy(int *p1,int *p2,int n)
{
	int i;
	for(i=0;i<n;i++)
		*(p2+i)=*(p1+i);
}

void print(int *p1,int *p2,int n)
{
	printf("first array element :");
        for(int i=0;i<n;i++)
        {
                printf("%d ",*(p1+i));
        }

	printf("\nsecond array element : ");

	 for(int i=0;i<n;i++)
        {
                printf("%d ",*(p2+i));
        }

}

