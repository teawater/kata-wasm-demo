#include <stdio.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
	int i = 0;
	while(1) {
		printf("To Infinity %d\n", i++);
		sleep(1);
	}
}

