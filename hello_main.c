#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i;
	printf("hello main\n");
	char buf[64] = "how i can't get the afternoon out of my mind";
	for(i = 0;i<sizeof(buf);i++)
		putchar(buf[i]);
	putchar('\n');
	return 0;
}
