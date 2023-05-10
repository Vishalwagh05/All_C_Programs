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
		if(i>0)
			k=i;
		while(k)
		{
			printf(" ");
			--k;
		}
		if(i<0)
			I=-i;
		else
			I=i;
		for(j=1;j<n+1-I;j++)
		{
			printf("*");
		}
	}
}
