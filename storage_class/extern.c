#include<stdio.h>
extern int x;
void inc(void)
{
	++x;
}
int main()
{ 
	printf("x=%d\n",x);
	inc();
	inc();
	inc();
	printf("x=%d\n",x);
}
int x=10;
