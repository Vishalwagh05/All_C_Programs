/*

1
12
123
1234
12345
1234
123
12
1

*/

#include<stdio.h>
int main()
{
	const int n=5;
	int i,j,I;
	for(i=-n;i<=n;i++,printf("\n"))
	{
		if(i<0)
			I=-i;
		else
			I=i;
		for(j=1;j<=n+1-I;j++)
			printf("%d",j);
	}
}

