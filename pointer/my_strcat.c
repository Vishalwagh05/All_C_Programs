/* Write a C program to concatenate two strings using pointers. */

#include<stdio.h>
#include<string.h>
void my_strcat(char *p1,char *p2);

int main()
{
        char s1[10],s2[10];
        int length;
        printf("Enter a string 1:");
        scanf(" %[^\n]",s1);
        printf("Enter a string 2:");
        scanf(" %[^\n]",s2);

	my_strcat(s1,s2);
        printf("string 1 : %s\n",s1);
}

void my_strcat(char *p1,char *p2)
{
	int i,j;
	for(i=0;p1[i];i++);
	for(i,j=0;p2[j];j++,i++)
		p1[i]=p2[j];
	p1[i]='\0';
}
