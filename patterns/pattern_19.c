/*

1
**
222
****
33333
******

*/


#include<stdio.h>
int main()
{
	int const n=6;
	int i,j,k=0;
	for(i=0;i<n;i++,printf("\n"))
	{
		if(i%2==0)
			k++;
		for(j=0;j<n;j++)
		{
			if(j<=i)
			{
				if(i%2==0)
					printf("%d",k);
				else
					printf("*");
			}
			else
				printf(" ");

		}
	}

}
