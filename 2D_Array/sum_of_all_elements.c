#include<stdio.h>
int main()
{
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int arr2[3][3], i, j, result1, result2;

	printf("Enter the elements of array : ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}

	printf("Elements of array 1 is :\n");
	for(i=0;i<3;i++,printf("\n"))
		for(j=0;j<3;j++)
		{
			printf("%d  ",arr1[i][j]);
		}

	printf("Elements of array 2 is :\n");
	for(i=0;i<3;i++,printf("\n"))
		for(j=0;j<3;j++)
		{
			printf("%d ",arr2[i][j]);
		}

	for(i=0;i<3;i++)
	{
		result1=0,result2=0;
		for(j=0;j<3;j++)
		{
			result1=result1+arr1[i][j];
			result2=result2+arr2[i][j];
		}
		printf("The sum of row of first array is : %d\n The sum of row of second array is : %d\n ",result1,result2);

	}
}
