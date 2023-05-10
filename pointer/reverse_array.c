/* Write a C program to reverse an array using pointers. */
#include<stdio.h>
void print(int*,int);
void reverse(int *p1,int n);
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
	
	reverse(arr,n);
	printf("After reverse array element is : ");
        print(arr,n);
	printf("\n");

}

void print(int *ptr,int n)
{
        for(int i=0;i<n;i++)
        {
                printf("%d ",*(ptr+i));
        }
}

void reverse(int *p1,int n)
{
	int temp,i,j;
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=*(p1+i);
		*(p1+i)=*(p1+j);
		*(p1+j)=temp;
	}
}
		
