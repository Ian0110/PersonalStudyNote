#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(void)
{
	printf("hello main\n");
	char *str = "branch test modify this file and output\n";
	
	int len = write(STDOUT_FILENO,str,strlen(str)); 
	printf("string length is %d\n",len);
	return 0;
}
