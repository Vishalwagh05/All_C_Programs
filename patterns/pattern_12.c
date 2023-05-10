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
	for(i=1;i<=n;i++)
	{ k=i;
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
		while(k)
		{
			printf(" ");
			k--;
		}
	}
}
