#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - apppends text at the end of a file
 * @filename: name of the file
 * @text_content: the content of the file
 *
 * Return: return 1 on success or -1 on failure or if the
 * filename is NULL. return 1 if the file exist and -1 if
 * the file does not exist or if you do not have the
 * required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK | R_OK) != 0)
		return (-1);
	file_des = open(filename, O_RDWR | O_APPEND);
	if (file_des == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		dprintf(file_des, "%s", text_content);
	}
	close(file_des);
	return (1);
}
