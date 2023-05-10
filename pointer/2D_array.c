/* Write a C program to access two dimensional array using pointers. */



#include<stdio.h>
#include<stdlib.h>

void print(int (*)[10],int,int);
int main()
{
        int arr[10][10],i,j,row,col;
        printf("Enter a number of Row and Column :");
        scanf("%d%d",&row,&col);

        for(i=0;i<row;i++)
        {
		for(j=0;j<col;j++)
		{

                printf("Enter a element : ");
                scanf("%d",&arr[i][j]);
		}
        }

        print(arr,row,col);

}

void print(int (*ptr)[10],int row,int col)
{
        for(int i=0;i<row;i++,printf("\n"))
        {
		for(int j=0;j<col;j++)
                printf("%d ",ptr[i][j]);
        }
}

