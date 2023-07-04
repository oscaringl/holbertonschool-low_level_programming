#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
