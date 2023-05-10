/* Write a C program to find length of a string. */

#include<stdio.h>
#include<string.h>

int str_len(char *s1);
int (*fp)(char*);

int main()
{
	char s1[10];
	int length;
        printf("Enter a string :");
        scanf("%[^\n]",s1);
	
	fp=str_len;
	
	length=fp(s1);
	
	printf("Given string length is : %d\n",length);
}

int str_len(char *s1)
{
	int i;
	for(i=0;s1[i];i++);
	return i;
}
