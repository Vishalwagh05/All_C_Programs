#include<stdio.h>
int swap(register int a,register int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d , b=%d\n",a,b);
}

int main()
{
	int a=5, b=10;
	printf("a=%d , b=%d\n",a,b);
	swap(a,b);

}
