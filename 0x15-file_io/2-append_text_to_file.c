#include <stdio.h>
#include <string.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
* append_text_to_file - append to file
* @filename: first arg
* @text_content: second arg
* Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int count;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_APPEND | O_WRONLY);
	if (fp == -1)
		return (-1);
	if (!text_content)
		count = write(fp, text_content, 0);
	if (text_content)
		count = write(fp, text_content, strlen(text_content));
	if (count == -1)
		return (-1);
	close(fp);
	return (1);

}
