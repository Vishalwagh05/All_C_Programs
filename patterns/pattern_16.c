/*


            0
         -1 0 1
      -2 -1 0 1 2 
   -3 -2 -1 0 1 2 3
-4 -3 -2 -1 0 1 2 3 4 
   -3 -2 -1 0 1 2 3
      -2 -1 0 1 2 
         -1 0 1
            0

*/


#include<stdio.h>
int main()
{
        const int n=5;
        int i,j,I,J;
        for(i=-(n-1);i<n;i++,printf("\n"))
        {
                if(i<0)
                        I=-i;
                else
                        I=i;
                for(j=-(n-1);j<n;j++)
                {
                        if(j<0)
                                J=-j;
                        else
                                J=j;
                        if((I+J==0)||(I+J)<=(n-1))
                                printf("%d",j);
                        else
                                printf("  ");
                }
        }
}

