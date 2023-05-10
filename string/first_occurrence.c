
#include<stdio.h>
#include<string.h>

char *my_strstr(char *s1,char *s2);
int cnt=1;

int main()
{
	char str1[50],str2[50];
	int length1,length2;
	char *ptr;

	printf("Enter a string :\n");
	scanf(" %[^\n]",str1);

	printf("Enter a WORD to find in string :\n");
	scanf(" %[^\n]",str2);
	

	ptr=my_strstr(str1,str2);
	if(ptr==NULL)
		printf("No occurrence found in given string.\n");
	else
		printf("'%s' is found on index '%d'.\n",str2,cnt);

}

char *my_strstr(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]==' ')
			cnt++;
		if(s1[i]==s2[0])
		{
			for(j=1;s2[j];j++)
			{
				if(s1[i+j]!=s2[j])
					break;
			}
			if(s2[j]=='\0')
				return s1+i;
		}
	}
	return NULL;
}

