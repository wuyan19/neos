#include <stdio.h>

extern int say_hello(void);

int main (int argc, char * argv[])
{
	say_hello();
	printf(" wuyan!\n");
	return 0;
}
