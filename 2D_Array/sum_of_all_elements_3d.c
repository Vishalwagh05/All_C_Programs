#include<stdio.h>
int main()
{
	int arr1[2][3][3], arr2[2][3][3], i, j, k, result1, result2;

	printf("Enter the elements of array : ");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&arr1[i][j][k]);
			}

	printf("Enter the elements of array : ");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&arr2[i][j][k]);
			}
	printf("Elements of array 1 is :\n");
	for(i=0;i<2;i++,printf("\n"))
		for(j=0;j<3;j++,printf("\t"))
			for(k=0;k<3;k++)
			{
				printf("%d  ",arr1[i][j][k]);
			}

	printf("Elements of array 2 is :\n");
	for(i=0;i<2;i++,printf("\n"))
		for(j=0;j<3;j++,printf("\t"))
			for(k=0;k<3;k++)
			{
				printf("%d ",arr2[i][j][k]);
			}

	for(i=0;i<2;i++)
	{
		result1=0,result2=0;
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				result1=result1+arr1[i][j][k];
				result2=result2+arr2[i][j][k];
			}
		printf("The sum of row of first array is : %d\n The sum of row of second array is : %d\n ",result1,result2);

	}
}

