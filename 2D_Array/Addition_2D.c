#include<stdio.h>

void Sum(int (*a)[10],int (*b)[10], int n);

int main()
{
	int arr1[10][10],arr2[10][10];
	int i, j, n;

	printf("Enter the size of array  :\n");
	scanf("%d",&n);

	printf("Enter the elements of 1st array :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr1[i][j]);


	printf("Enter the elements of 2nd array :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr2[i][j]);

	Sum(arr1,arr2,n);
}


void Sum(int (*a)[10],int (*b)[10],int n)
{
	int i, j, sum[10][10];

	printf("addition of array is:\n");
	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
}
