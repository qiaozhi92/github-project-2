#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int i = 0;
	srand(time(NULL));

	for(i = 0; i < 99; i++)
	{
		printf("%d  ",rand()%10 + 1);
	}
	printf("\n");
	return 0;
}
