/* Write a C program to find length of string using pointers. */



#include<stdio.h>
#include<string.h>

int my_strlen(char *p1);

int main()
{
	char s1[10];
	int length;
	printf("Enter a string :");
	scanf("%[^\n]",s1);

	length=my_strlen(s1);

	printf("%d\n",length);
}

int my_strlen(char *p1)
{
	int i;
	for(i=0;p1[i];i++);
	return i;
}


