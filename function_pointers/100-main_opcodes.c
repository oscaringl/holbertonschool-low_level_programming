#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments (including the program name).
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);

		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return 0;
}
