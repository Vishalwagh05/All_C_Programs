/*

    *
   **
  ***
 ****
*****

n a no. of columns and rows 

*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n value : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=n;j++)
		{
			if(i+j>n)
				printf("*");
			else
				printf(" ");
		}
	}
}