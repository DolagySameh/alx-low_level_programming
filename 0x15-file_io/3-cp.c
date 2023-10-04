#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
* _exit11 - exit status
* @error: first arg
* @str: escond arg
* @fd: thied arg
* Return: int
*/
int _exit11(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE %s\n", s);
			exit(error);
		case 99:
			dprintf(2, "Error: Can't write to NAME_OF_THE_FILE %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}
/**
* main - cp from file to another
* @argc: first argument
* @argv: second arg
* Return: 0
*/
int main(int argc, char *argv[])
{
	int fpto, fpfrom, count1, count2, close1, close2;
	char buffer[1024];

	if (argc != 3)
		_exit11(97, NULL, 0);
	fpto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fpto == -1)
		_exit11(99, argv[2], 0);
	fpfrom = open(argv[1], O_RDONLY);
	if (fpfrom == -1)
		_exit11(98, argv[1], 0);
	count1 = read(fpfrom, buffer, 1024);
	if (count1 == -1)
		_exit11(98, argv[1], 0);
	else
	{
		count2 = write(fpto, buffer, count1);
		if (count2 == -1)
			_exit11(99, argv[2], 0);
	}
	close1 = close(fpfrom);
	if (close1 == -1)
		_exit11(100, NULL, close1);
	close2 = close(fpto);
	if (close2 == -1)
		_exit11(100, NULL, close2);
	return (0);
}
