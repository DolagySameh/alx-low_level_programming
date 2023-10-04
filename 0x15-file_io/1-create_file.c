#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
* create_file - creates a file.
* @filename: first arg
* @text_content: second arg
* Return: integer
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	int count;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
		count = write(fp, text_content, strlen(text_content));
	else
		count = write(fp, text_content, 0);
	if (count == -1)
		return (0);
	return (1);
}
