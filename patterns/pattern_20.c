/* 

    A
   bb
  CCC
 dddd
EEEEE

*/

#include<stdio.h>
int main()
{
	const int n=5;
	int i,j,cap=64,small=96;
	for(i=0;i<n;i++,printf("\n"))
	{
		cap++;
		small++;
		for(j=0;j<n;j++)
		{
			if((i+j)>=(n-1))
			{
				if(i%2==0)
					printf("%c",cap);
				else
					printf("%c",small);
			}
			else
				printf(" ");
		}
	}
}

