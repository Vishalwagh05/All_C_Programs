/*

    *
   **
  ***
 ****
*****
****
***
**
*  

  
*/

#include<stdio.h>
const int n=5;
int main()
{
	int i,j,I,k;
	for(i=-(n-1);i<n;i++,printf("\n"))
	{
		k=i;
		if(i<0)
			I=-i;
		else
			I=i;
		if(i<0)
		{
			while(k)
			{
				printf(" ");
				k++;
			}
		}

		for(j=1;j<n+1-I;j++)
		{
			printf("*");
		}
	}
}

