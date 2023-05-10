#include<stdio.h>
#include<string.h>

char *my_strcat(char *s1,char *s2,int l1);
int my_strlen(char *s1);
int main()
{
	char str1[50],str2[50],str3[50];
	int l1;
	char *ptr;

	printf("Enter a first string :\n");
	scanf(" %[^\n]",str1);

	printf("Enter a string string :\n");
	scanf(" %[^\n]",str2);

	l1=my_strlen(str1);
	my_strcat(str1,str2,l1);
	l1=my_strlen(str1);

	printf("After concatenate string is : %s\n",str1);
	printf("length of string is : %d\n",l1);

}

int my_strlen(char *s1)
{
	int i,cnt=0;
	for(i=0;s1[i];i++)
	{
		cnt++;
	}
	return cnt;
}

char *my_strcat(char *s1,char *s2,int l1)
{
	int i,j;
	char temp,cnt=0;
	for(i=0;s2[i];i++)
	{
		s1[i+l1]=s2[i];
	}
	s1[i+l1+1]='\0';
	return s1;

}



