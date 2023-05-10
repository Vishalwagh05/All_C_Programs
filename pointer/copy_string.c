/* Write a C program to copy one string to another using pointers. */

#include<stdio.h>
#include<string.h>

void copy_string(char *p1,char *p2);
int main()
{
        char s1[10],s2[10];
        int length;
        printf("Enter a string :");
        scanf("%[^\n]",s1);

	copy_string(s1,s2);
        printf("string 1: %s\nstring 2: %s\n",s1,s2);
}

void copy_string(char *p1,char *p2)
{
	int i;
	for(i=0;p1[i];i++)
	{
		p2[i]=p1[i];
	
	}
}
