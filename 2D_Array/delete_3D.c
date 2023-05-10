#include<stdio.h>
#include<stdio_ext.h>

void menu();
void print(int (*a)[10][10],int n);
void delete(int (*a)[10][10],int n);

int main()
{
        int arr1[10][10][10];
        int i,j,k,n;

        printf("Enter the size of array : ");
        scanf("%d",&n);

        printf("Enter the elements of array : ");
        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
for(k=0;k<n;k++)
                        scanf("%d",&arr1[i][j][k]);

        while(1)
        {
                char c;
                menu();
                __fpurge(stdin);
                printf("enter a choice : ");
                scanf("%c",&c);
                switch(c)
                {
                        case 'p' : print(arr1,n);
                                   break;
                        case 'd' : delete(arr1,n);
                                   break;
                        case 'q' : return 0;
                        default : printf("Invalid input.\n");
                                  return 0;
                }
        }
}

void menu()
{
        printf("\n------MENU------\n");
        printf(" p : print\n d : delete\n q : quit\n");
}

void print(int (*a)[10][10],int n)
{
        int i, j, k;
        printf("\n");
        for(i=0;i<n;i++,printf("\n"))
                for(j=0;j<n;j++,printf("\t"))
for(k=0;k<n;k++)
                        printf("%d\t",a[i][j][k]);
}


void delete(int (*a)[10][10],int n)
{
        int i,j,k,l,c;
        printf("Enter the row no. : ");
        scanf("%d",&i);

        printf("Enter the value of l : ");
        scanf("%d",&l);
        
	printf("Enter the column no. : ");
        scanf("%d",&j);

        for(k=n-j;k<n;k++)
        {
                a[i][l][k]=a[i][l][k+1];
        }
        a[i][l][--k]=0;


}
