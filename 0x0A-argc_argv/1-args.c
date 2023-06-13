#include "main.h"

/**
 * main - Print the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Returns 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
