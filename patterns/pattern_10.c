/*

   
    *
   ***
  *****
 *******
*********

n a no. of columns 

*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n value : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=9;j++)
		{
			if((j>=6-i)&&(j<=4+i))
				printf("*");
			else
				printf(" ");
		}
	}
}


