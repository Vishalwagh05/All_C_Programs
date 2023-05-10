/*

*********
 *******
  *****
   ***
    *

n a no. of columns 

*/

#include<stdio.h>
int main()
{
        int i,j,n=5;
       // printf("Enter n value : ");
     //   scanf("%d",&n);

        for(i=0;i<n;i++,printf("\n"))
        {
for(j=1;j<=9;j++)
{
                        if((j>i)&&((j<=(9-i))))
                                printf("*");
                        else
                                printf(" ");
                }
        }
}

