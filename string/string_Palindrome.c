
#include<stdio.h>
#include<string.h>

int my_strlen(char *s1);
int check_palindrome(char *s1,int l1);
int main()
{
	char str1[50];
	int length,result;

	printf("Enter a string :\n");
	gets(str1);
	length=my_strlen(str1);

	result=check_palindrome(str1,length);

	if(result==(length/2))
		printf("string is palindrome\n");
	else
		printf("string is not palindrome\n");

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

int check_palindrome(char *s1,int l1)
{
	int i,j,cnt=0;

	for(i=0,j=l1-1;i<l1/2;i++,j--)
	{
		if(s1[i]==s1[j])
			cnt++;
	}

	return cnt;
}

