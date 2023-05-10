/* Write a C program to swap two arrays using pointers. */

#include<stdio.h>
void swap_array(int *p1,int *p2,int n);
void print(int *p1,int n);

int main()
{
	int arr1[10],arr2[10],n;


        printf("Enter a number of elements :");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
                printf("Enter a element of array 1 : %d: ",i+1);
                scanf("%d",&arr1[i]);
        }

	 for(int i=0;i<n;i++)
        {
                printf("Enter a element of array 2 : %d: ",i+1);
                scanf("%d",&arr2[i]);
        }
	 swap_array(arr1,arr2,n);

         printf("first array element : ");
	 print(arr1,n);
	 printf("\nsecond array element : ");
	 print(arr2,n);

		
}

void swap_array(int *p1,int *p2,int n)
{
	int temp,i;
	for(i=0;i<n;i++)
	{
		temp=*(p1+i);
		*(p1+i)=*(p2+i);
		*(p2+i)=temp;
	}
}

void print(int *p1,int n)
{
        for(int i=0;i<n;i++)
        {
                printf("%d ",*(p1+i));
        }


}

