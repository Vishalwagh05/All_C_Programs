/* Write a C program to find total number of alphabets, digits or special character in a string. */


#include<stdio.h>
#include<string.h>

int Alphabet(char*);
int Digit(char*);
int special_char(char*);

int (*fp[])(char*)={Alphabet,Digit,special_char};

int main()
{
        char s1[10];
        int alpha,digit,spe_char;
        printf("Enter a string 1:");
        scanf(" %[^\n]",s1);
	
	alpha=(fp[0])(s1);
	digit=(fp[1])(s1);
	spe_char=(fp[2])(s1);

	printf("%d : alphabets, %d : digits, %d : special character present in given string.\n",alpha,digit,spe_char);

}

int Alphabet(char *s1)
{
	int i,cnt=0;
	for(i=0;s1[i];i++)
	{
		if(((s1[i]>='A')&&(s1[i] <= 'Z'))||((s1[i]>='a') &&(s1[i] <= 'z')))
			cnt++;
	}
	return cnt;
}

int Digit(char *s1)
{
	int i,cnt=0;
	for(i=0;s1[i];i++)
	{
		if((s1[i]>='0')&&(s1[i]<='9'))
			cnt++;
	}
	return cnt;
}

int special_char(char *s1)
{
	int i,cnt=0;
	 for(i=0;s1[i];i++)
        {
                if(!(((s1[i]>='0')&&(s1[i]<='9'))||((s1[i]>='A')&&(s1[i] <= 'Z'))||((s1[i]>='a') &&(s1[i] <= 'z'))))

                        cnt++;
        }
        return cnt;
}

