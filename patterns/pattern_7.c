/*

*****
*****
*****
*****
*****


n a no. of columns and rows 

*/

#include<stdio.h>
#define n 5
int main()
{

        int i,j,J;
        // printf("Enter n value : ");
        // scanf("%d",&n);

        for(i=0;i<n;i++,printf("\n"))
        {
                for(j=0;j<n;j++)
		{
                                printf("*");
                }
        }
}

