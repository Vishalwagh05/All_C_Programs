#include<stdio.h>
int main()
{
	int fd;
	fd=open("*/dev/ttys0",0_RDWR);
	write(fd,"Hello",5);
	close(fd);
}

