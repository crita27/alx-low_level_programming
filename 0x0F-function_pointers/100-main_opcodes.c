#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *);
	for (i = 0; i < num_bytes; i++) 
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	if (argc != 2) 
	{
		printf("Error\n");
		return 1;
	}
	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0) {
        printf("Error\n");
        return 2;
	}
	print_opcodes(num_bytes);
	return 0;
}
