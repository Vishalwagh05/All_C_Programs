/*

1
33
555
7777
99999
8888
666
44
2

*/

#include<stdio.h>
int main()
{
	const int n=4;
	int i,j,I,c=-1,d=12;
	for(i=-n;i<=n;i++,printf("\n"))
	{
		c=c+2;
		if(i<0)
			I=-i;
		else
		{
			d=d-2;
			I=i;
		}
		for(j=1;j<=n+1-I;j++)
		{
			if(i<=0)
				printf("%d",c);
			else
				printf("%d",d);
		}
	}
}

