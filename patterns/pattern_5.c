/*

*       *
**     **
***   ***
**** ****
*********

n a no. of columns and rows 

*/

#include<stdio.h>
#define n 5
int main()
{

	int i,j,J;
	// printf("Enter n value : ");
	// scanf("%d",&n);

	for(i=0;i<n;i++,printf("\n"))
	{
		for(j=-(n-1);j<n;j++)
		{
			if(j<0)
				J=-j;
			else
				J=j;

			if((J+i)>=(n-1))
				printf("*");
			else
				printf(" ");
		}
	}
}

