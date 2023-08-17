#include <stdio.h>
#include <unistd.h>

#include <fcntl.h>
#include <string.h>
int main(void)
{
	int i;
	printf("hello main\n");
	char buf[64] = "how i can't get the afternoon out of my mind";
	for(i = 0;i<sizeof(buf);i++)
		putchar(buf[i]);
	putchar('\n');

	char *str = "branch test modify this file and output\n";
	
	int len = write(STDOUT_FILENO,str,strlen(str)); 
	printf("string length is %d\n",len);
	return 0;
}
