#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	printf("hello main\n");
	char *str = "branch test modify this file and output\n";
	
	int fd = write(1,str,sizeof(str));
	return 0;
}
