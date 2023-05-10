/*


*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********


n a no. of columns and rows 

*/

#include<stdio.h>

int main()
{
	const int n=5;
	int i,j,J,I;
	// printf("Enter n value : ");
	// scanf("%d",&n);

	for(i=-(n-1);i<n;i++,printf("\n"))
	{	
		if(i<0)
			I=-i;
		else
			I=i;
		for(j=-(n-1);j<n;j++)
		{
			if(j<0)
				J=-j;
			else
				J=j;

			if(I<J)
				printf(" ");
			else
				printf("*");
		}
	}
}

