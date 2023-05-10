/*

    *****
   *****
  *****
 *****
*****

*/

#include<stdio.h>

const int n=5;

int main()
{
	int i,j,k;
	for(i=n-1;i>=0;i--)
	{
		k=i;
		while(k)
		{
			printf(" ");
			k--;
		}
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");

	}
}

