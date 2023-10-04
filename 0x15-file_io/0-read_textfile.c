#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* read_textfile - read & write
* @filename: first arg
* @letters: sarg
* Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t count, count1;

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	count = read(fp, buffer, letters);
	if (count == -1)
		return (0);
	count1 = write(STDOUT_FILENO, buffer, count);
	if (count1 == -1 || count != count1)
		return (0);
	free(buffer);
	close(fp);
	return (count1);
}
