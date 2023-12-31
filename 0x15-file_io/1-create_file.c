#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: return 1 on success or -1 on failure(file can
 * not be created, file can not be written, write "fails")
 * or if filename if NULL
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	size_t len;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
	{
		close(file_des);
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(file_des, text_content, len);
	}
	close(file_des);
	return (1);
}
