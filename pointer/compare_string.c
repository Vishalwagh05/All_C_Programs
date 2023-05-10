/* Write a C program to compare two strings using pointers. */

#include<stdio.h>
#include<string.h>
int str_cmp(char *p,char *q);

int main()
{
	char s1[10],s2[10],i;

	printf("Enter a string 1 : ");
	scanf(" %[^\n]",s1);
	printf("Enter a string 2 : ");
	scanf(" %[^\n]",s2);

	i=str_cmp(s1,s2);
	if(i==0)
		printf("Both string are same\n");
	 else if(i<0)
		printf("S1 is greater than S2\n");
	else
		printf("S1 is lesser than S2\n");
}
int str_cmp(char *p,char *q)
{
	while(*p && *q)
	{
		if(*p != *q)
			break;
		p++;
		q++;
	}
	if(*p == *q)
		return 0;
	else if(*p > *q)
		return 1;
	else
		return -1;
}

